//============================================================================
// Name        : Sum of 2 elements in array equal to x
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description :
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;



int main() {

	int n = 4;
	int arr[] = { 2, 7, 11, 15 }, target = 9;
	unordered_map<int, int> my_mp;

	for (int i = 0; i < n; i++)   // O(n)
	{
		if (my_mp.count(target - arr[i]) > 0) // O(1)
		{
			cout << i << " " << my_mp[target - arr[i]] << endl; // O(1)
		}
		my_mp[arr[i]] = i;

	}

	return 0;
}
