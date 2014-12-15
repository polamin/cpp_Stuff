#include <iostream>

using namespace std;

typedef int grid_row[6];

int addAll(grid_row my_grid[], int size) {  // See example in this line
	int x, y;
	int sum = 0;
	for (x = 0; x<size ; x++) {
		for (y = 0 ; y < 6 ; y++) {
			sum += my_grid[x][y];
		}
	}
	return sum;
}