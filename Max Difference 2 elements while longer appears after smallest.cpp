//============================================================================
// Name        : Max Difference 2 elements while longer appears after smallest
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description :
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;


int maxDifference( const vector<int> & vec) // O(n) Memory O(1)
{

	int sz = (int)vec.size(), ans = 0 , maxx = vec.back();

	for(int i = sz-2 ;i>=0 ;i--)
	{
		ans = max(ans , maxx- vec[i] );
		maxx = max(maxx, vec[i]);
	}
	return ans;
}



int main() {

	vector<int> vec(5);
	cout << "Normal Vector : ";
	for (int i = 0; i < (int) (vec.size()); i++) {
		vec[i] = rand() % 10 +1;
		cout << vec[i] << " ";

	}



	cout<<endl<< "max Diff : "<<maxDifference(vec)<<endl;

	return 0;
}
