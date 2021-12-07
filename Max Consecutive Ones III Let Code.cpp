//============================================================================
// Name        : Most K Zereos
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description : Given a binary array and integer K , return the maximum length of a contiguous subarray that has at most k zeros
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;

int max_lenght_most_k_(const vector<int>& nums, int k) {

	int res = 0;
	for (int start = 0, end = 0, zeros = 0; end< (int) nums.size(); end++) {
		if (nums[end] == 0)
			zeros++;

		while (zeros > k) {
			zeros -= (int)(nums[start]==0);
			start++;
		}
		res = max(res, end - start + 1);
	}
	return res;
}

int main() {


	vector<int> vec { 0, 0, 0, 1 };

	cout << endl << "Length  : " << max_lenght_most_k_(vec, 4) << endl;

	return 0;
}
