/*

Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
first index or -1

Constraints :
1 <= N <= 10^3

Sample Input :
4
9 8 10 8
8

Sample Output :
1

*/

#include <bits/stdc++.h>
using namespace std;

int firstIndex(int input[], int size, int x) {
    static int i; 
  
    if (i == size) { 
        return -1; 
    } 
	if(input[i] == x) {
		return i;
	}
	i++; 
	return firstIndex(input, size, x);
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

	int index = firstIndex(input, size, x);
	cout << index << endl;
	return 0;
}