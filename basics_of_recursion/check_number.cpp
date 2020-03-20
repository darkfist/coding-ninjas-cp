/*

Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
true or false

Constraints :
1 <= N <= 10^3

Sample Input :
3
9 8 10
8

Sample Output :
true

*/

#include <bits/stdc++.h>
using namespace std;

bool checkNumber(int input[], int size, int x) {
	if(size < 0) {
		return false;
	}
	else {
		if(input[size-1] == x) {
			return true;
		}
		else {
			return checkNumber(input, size-1, x);
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int size;
	cin >> size;

	int input[size];
	for(int i = 0; i < size; i++) {
		cin >> input[i];
	}

	int x;
	cin >> x;

	bool found = checkNumber(input, size, x);
	cout << boolalpha << found << endl;
	return 0;
}