/*

There is only one beauty parlour in the town CodingNinjasLand. The receptionist at the beauty parlor is flooded with appointment requests because the “Hakori” festival is round the corner and everyone wants to look good on it.
She needs your help. The problem is they don’t have chairs in reception. They are ordering chairs from NinjasKart. They don’t want to order more than required. You have to tell the minimum number of chairs required such that none of the customers has to stand.

Input Format :
First line contains the number of customers that will come. Second line contains N space-separated integers which represent the arrival timings of the customer. Third line contains N space-separated integers which represent the departure timings of the customer. Arrival and departure timings are given in 24-hour clock.

Constraints:
1<= N <= 100
Arrival and departure timings lie in the range [0000 to 2359]
Time Limit: 1 second

Output Format :
You have to print the minimum number of chairs required such that no customer has to wait standing. 

Sample Input 1 :
5
900 1000 1100 1030 1600
1900 1300 1130 1130 1800

Sample Output 1:
4

Explanation:
4 because at 1100 hours, we will have maximum number of customers at the shop, throughout the day. And that maximum number is 4. 

*/

#include <bits/stdc++.h>
using namespace std;

int max_chair_count(int in[], int out[], int n) {
	sort(in, in+n); 
	sort(out, out+n);

	int chair_count = 1, max_chair = 1;

	int i = 1, j = 0;
	while(i < n && j < n) {
		if(in[i] <= out[j]) {
			chair_count++;
			i++;

			if(chair_count > max_chair) {
				max_chair = chair_count;
			}
		}
		else {
			chair_count--;
			j++;
		}
	}
	return max_chair; 
}

int main() {
	int n;
	cin >> n;
	
	int in[n];
	int out[n];

	for(int i = 0; i < n; i++) {
		cin >> in[i];
	}
	for(int i = 0; i < n; i++) {
		cin >> out[i];
	}

	cout << max_chair_count(in, out, n) << endl;
	return 0;
} 