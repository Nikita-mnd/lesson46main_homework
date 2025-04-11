#include <iostream>
using namespace std;

int find_max_element(int size, int** m) {
	int max = -2147483648;
	bool n;
	for (int i = 0; i < size; i++)
	{
		n = true;
		for (int j = 1; j < size; j++)
		{
			if (m[i][j] < m[i][j - 1]) {
				n = false;
			}
			if (n == true) {

				for (int i1 = 0; i1 < size; i1++)
				{

					for (int j1 = 1; j1 < size; j1++)
					{

						if (max < m[i1][j1]) {
							max = m[i1][j1];
						}
					}

				}
			}


		}
	}
	return max;
}