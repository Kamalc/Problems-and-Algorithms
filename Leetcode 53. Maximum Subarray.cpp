//============================================================================
// Name        : Maximum Subarray
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description : Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;

int max_value_sub_array_prefix_sol(const vector<int>& nums) { // O(n)  Prefix Sum Base Approach

	int prefix = 0, min_last_prefix = 0, res = INT_MIN;
	for (int i = 0; i < (int) nums.size(); i++) {
		//cout<<prefix<< " "<< min_last_prefix<<  " "<< res<<endl;
		prefix += nums[i];

		res = max(res, (prefix - min_last_prefix));

		min_last_prefix = min(min_last_prefix, prefix);
	}

	return res;
}

int max_value_sub_array_slide_window(const vector<int>& nums) { // O(n)  Variable size Sliding Window Based Approach

	int res = INT_MIN , max_sum_window = 0;

	for(int i =0 ;i< (int)nums.size();i++)
	{
		max_sum_window = max(nums[i], max_sum_window + nums[i]);
		res = max(res, max_sum_window);
	}

	return res;
}

int main() {

	vector<int> vec { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	cout << endl << "Length  : " << max_value_sub_array_slide_window(vec) << endl;

	return 0;
}
