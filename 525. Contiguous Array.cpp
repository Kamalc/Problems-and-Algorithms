//============================================================================
// Name        : 525. Contiguous Array
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description : Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {
	for (int i = 0; i < (int) nums.size(); i++) // change every 0 -> -1 and make array prefix sum
			{
		if (nums[i] == 0) {
			nums[i] = -1;
		}
		if (i) {
			nums[i] += nums[i - 1];
		}
	}

	int res = 0;
	unordered_map<int, int> mp;
	mp[0] = -1;
	for (int i = 0; i < (int) nums.size(); i++) {

		if (mp.count(nums[i])) {
			res = max(res, i - mp[nums[i]]);
		} else {
			mp[nums[i]] = i;
		}
	}
	return res;
}

int main() {

	vector<int> vec { 1, 0, 0, 1 };

	cout << endl << "Length  : " << findMaxLength(vec) << endl;

	return 0;
}
