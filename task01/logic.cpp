#include "logic.h"

bool sorted(const int* row, int size) {
    bool in = true, dec = true;
    for (int i = 1; i < size; ++i) {
        if (row[i] < row[i - 1]) in = false;
        if (row[i] > row[i - 1]) dec = false;
    }
    return in|| dec;
}

int find_max(int matrix[][100], int rows, int cols) {
    int maxVal = -2147483648;
    for (int i = 0; i < rows; ++i) {
        if (sorted(matrix[i], cols)) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] > maxVal) maxVal = matrix[i][j];
            }
        }
    }
    return maxVal;
}

int find_row_with_longest_sequence(int matrix[][100], int rows, int cols) {
    int max = 0, rowi = -1;
    for (int i = 0; i < rows; ++i) {
        int current = 1;
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == matrix[i][j - 1]) {
                current++;
            }
            else {
                current = 1;
            }
            if (current > max) {
                max = current;
                rowi = i;
            }
        }
    }
    return rowi;
}


int find_max_consecutive_sequence(const int* row, int size) {
    int maxi = 1, currenti = 1;
    int maxd = 1, currentd = 1;

    for (int i = 1; i < size; ++i) {
        if (row[i] > row[i - 1]) {
            currenti++;
            if (currenti > maxi) {
                maxi = currenti;
            }
            currentd = 1;
        }
        else if (row[i] < row[i - 1]) {
            currentd++;
            if (currentd > maxd) {
                maxd= currentd;
            }
            currenti = 1;
        }
        else {
            currenti = 1;
            currenti = 1;
        }
    }

    return maxi > maxd ? maxi : maxd;
}

int sum_between_positive(const int* row, int size) {
    int sum = 0, firstPosIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (row[i] > 0) {
            if (firstPosIndex == -1) {
                firstPosIndex = i;
            }
            else {
                for (int j = firstPosIndex + 1; j < i; ++j) {
                    sum += row[j];
                }
                break;
            }
        }
    }
    return sum;
}
