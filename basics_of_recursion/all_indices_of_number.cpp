/*

Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
indexes where x is present in the array (separated by space)

Constraints :
1 <= N <= 10^3

Sample Input :
5
9 8 10 8 8
8

Sample Output :
1 3 4

*/

#include <bits/stdc++.h>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
    static int i = 0;
	static int j = 0;
    if(i == size){
		return j;
	}
	if(input[i]==x){
		output[j] = i;
        j++;
	}
    i++;
	allIndexes(input, size, x, output);
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

	int output[size];

	int output_size = allIndexes(input, size, x, output);
	for(int i = 0; i < output_size; i++) {
		cout << output[i] << " ";
	}
	return 0;
}