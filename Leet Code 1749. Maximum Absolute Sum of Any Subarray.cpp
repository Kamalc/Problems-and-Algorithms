//============================================================================
// Name        : 1749. Maximum Absolute Sum of Any Subarray
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description : You are given an integer array nums. The absolute sum of a subarray [numsl, numsl+1, ..., numsr-1, numsr] is abs(numsl + numsl+1 + ... + numsr-1 + numsr).
//				Return the maximum absolute sum of any (possibly empty) subarray of nums.
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;

int max_sum_sub(const vector<int>& nums) {
	int max_pref = 0;
	int res = INT_MIN;
	for (int i = 0; i < (int) nums.size(); i++) {
		max_pref = max(nums[i], max_pref + nums[i]);
		res = max(res, max_pref);
	}

	return res;

}

int min_sum_sub(const vector<int>& nums) {
	int res = INT_MAX, min_pref = 0;
	for (int i = 0; i < (int) nums.size(); i++) {
		min_pref = min(nums[i], min_pref + nums[i]);
		res = min(res, min_pref);

	}

	return res;
}

int maxAbsoluteSum(const vector<int>& nums) {

	int res = max(abs(max_sum_sub(nums)) , abs(min_sum_sub(nums)));
	return res;
}

int main() {

	vector<int> vec {2,-5,1,-4,3,-2};

	cout<<maxAbsoluteSum(vec)<<endl;
	return 0;
}
