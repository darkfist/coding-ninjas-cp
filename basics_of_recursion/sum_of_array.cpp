/*

Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

Output Format :
Sum

Constraints :
1 <= N <= 10^3

Sample Input :
3
9 8 9

Sample Output :
26

*/

#include <bits/stdc++.h>
using namespace std;

int sum(int input[], int n) {

    if(n < 0) {
		return 0;
	}
	return input[n-1] + sum(input, n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
	cin >> n;

    int * input;
    input = new int [n];

	for(int i = 0; i < n; i++) {
		cin >> input[i];
	}

	int array_sum = sum(input, n);
	cout << array_sum << '\n';

	return 0;
}

