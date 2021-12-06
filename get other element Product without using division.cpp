//============================================================================
// Name        : Replace every array element with the product of every other element without using a division operator
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description :
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;

void calcProduct(vector<int> &vec) {

	if (vec.empty()) {
		return void();
	}

	int sz_vec = (int) vec.size();

	int right[sz_vec], left[sz_vec] ;

	left[0] = 1;

	for (int i = 1; i < sz_vec; i++) {
		left[i] = vec[i-1] * left[i - 1];
	}

	right[sz_vec - 1] = 1;
	for (int i = sz_vec - 2; i >= 0; i--) {
		right[i] = vec[i+1] * right[i + 1];
	}

	for(int i =0 ;i<sz_vec ; i++)
	{
		vec[i]=left[i] * right[i];
	}

}

int main() {

	vector<int> vec(5);
	cout << "Normal Vector : ";
	for (int i = 0; i < (int) (vec.size()); i++) {
		vec[i] = rand() % 10 +1;
		cout << vec[i] << " ";

	}


	calcProduct(vec);

	cout<<endl;
	for(auto i : vec)
	{
		cout<<i<<" ";
	}
	return 0;
}
