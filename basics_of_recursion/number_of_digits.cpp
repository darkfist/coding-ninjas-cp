/*

Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.

Input Format :
Integer n

Output Format :
Count of digits

Constraints :
1 <= n <= 10^6

Sample Input :
 156

Sample Output :
3

*/

#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int i = 0;
    if(n > 9){
        i = 1;
    }
    if(n > 0 && n < 10){
        return 1;
    }
    return i + count(n / 10);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin >> n;

	int res = count(n);
	cout << res << '\n';

	return 0;
}