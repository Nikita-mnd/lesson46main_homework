#include "logic.h"

int main() {
    const int rows = 4, cols = 6;
    int matrix[100][100] = {
        {1, 2, 3, 4, 5, 6},
        {4, 4, 4, 4, 4, 4},
        {5, -1, 0, 7, 7, 7},
        {-1, 3, 2, -5, -6, 2}
    };

    cout << "find max: " << find_max(matrix, rows, cols) << endl;
    cout << "find row with longest sequence: " << 
        find_row_with_longest_sequence( matrix,  rows,  cols) << endl;
    cout << "find max consecutive sequence: " << find_max_consecutive_sequence( matrix,  100) << endl;
    cout << "sum between positive: " << sum_between_positive(matrix, rows, cols) << endl;

    return 0;
}
