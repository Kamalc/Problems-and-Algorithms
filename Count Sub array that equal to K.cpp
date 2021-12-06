//============================================================================
// Name        : Count Sub array that equal to K
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description :
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;

int subarraySum(const vector<int> & vec, int k) // O(n)
		{
	unordered_map<int, int> prefix_map;

	prefix_map[0] = 1;

	int res =0 , prefix_sum =0;

	for(int i =0 ;i<(int)vec.size();i++ )
	{
		prefix_sum += vec[i];

		if(prefix_map.count (prefix_sum - k))
			res+= prefix_map[prefix_sum - k];

		prefix_map[prefix_sum]++;

	}

	return res;
}

int main() {

	vector<int> vec {9,-9,1,3,5};


	cout<<endl<< "count Sub array  : "<<subarraySum(vec , 9)<<endl;

	return 0;
}
