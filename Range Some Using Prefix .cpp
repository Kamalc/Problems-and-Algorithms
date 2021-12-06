//============================================================================
// Name        : Some Range in prefix Vector in O(1)
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description :
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;

int range_sum(int start, int end, const vector<int> &prefix) { // O(1)
	if (start == 0)
		return prefix[end];

	return prefix[end] - prefix[start - 1];
}

int main() {

	vector<int> vec(20);
	cout << "Normal Vector : ";
	for (int i = 0; i < (int) (vec.size()); i++) {
		vec[i] = rand() % 10;
		cout << vec[i] << " ";
		if (i) {
			vec[i] += vec[i - 1];
		}
	}
	cout << endl;
	cout << "Prefix Vector : ";
	for (int i = 0; i < (int) (vec.size()); i++) {
		cout << vec[i] << " ";
	}

	cout << endl;
	cout << range_sum(0, 5, vec);
	return 0;
}
