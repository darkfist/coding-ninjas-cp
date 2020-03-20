/*

Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.

Input format :
String S

Output format :
Output String

Constraints :
1 <= Length of S <= 50000

Sample Input 1 :
ababacd

Sample Output 1 :
abcd

Sample Input 2 :
abcde

Sample Output 2 :
abcde

*/

#include <bits/stdc++.h>
using namespace std;

char* uniqueChar(char *str){

    map<int,int> unique_count;
    map<int,int>::iterator it;

	for(int i = 0; i < strlen(str); i++) {
		unique_count[(int)str[i]]++;
	}
    for(it = unique_count.begin(); it != unique_count.end(); it++) {
		cout << (char)it->first;
	}
}

int main()
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	
	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;

	return 0;
}