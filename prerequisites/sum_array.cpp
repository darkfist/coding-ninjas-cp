/*

Given a 2-d square matrix of order ‘n’, find the sum of elements of both diagonals and all boundaries elements. Boundary elements refer to the elements present on all the four boundaries of matrix.

Input:
First line will have a single integer ‘n’ denoting the order of matrix.
Next ‘n’ lines will have ‘n’ space separated integers each denoting the elements of matrix.

Constraints:
1<=n<=100

Output:
Print a single integer denoting the sum.

Sample input:
3
1 2 3
4 5 6
7 8 9

Sample Output:
45

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int** arr = new int*[n];
	for(int i = 0; i < n; ++i) {
		arr[i] = new int[n];
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int sum_array = 0;

	for(int i = 0; i < n; i++) {
		// adding all corner elements
		if(i == 0 || i == n-1) {
			sum_array += arr[0][i];
			sum_array += arr[n-1][i];
		}
		else {
			// adding all boundary elements excluding corners
			sum_array += arr[0][i];
			sum_array += arr[n-1][i];
			sum_array += arr[i][0];
			sum_array += arr[i][n-1];

			// adding the diagonals excluding the corner elements
			for(int j = 1; j < n-1; j++) {
				if (i == j) {
					sum_array += arr[i][j];
				}
				if (i + j == n - 1) {
					sum_array += arr[i][j];
				}
			}
		}
	}

	if(n % 2 != 0) {
		sum_array -= arr[n/2][n/2];
	}
	cout << sum_array << endl;

	return 0;
}