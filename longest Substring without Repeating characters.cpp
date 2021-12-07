//============================================================================
// Name        : longest Substring without Repeating characters
// Author      : Kamal Saad
// Version     :
// Copyright   : MIT copyright
// Description : Given a String  and output longest Substring Length without Repeating characters
//============================================================================

//
#include <bits/stdc++.h>
using namespace std;

int max_lenght_without_repeat(const string s) { // O(n)

	int res = 0;
		unordered_map<char, int> visted;
		for (int start = 0, end = 0; end < (int) s.size(); end++) {

			if(visted.count(s[end])) // O(1)
				start= max(start, visted[s[end]]+1);   // max here to make sure that the element not out our slide window

			res = max(res, end - start + 1);
			visted[s[end]] = end; // O(1)

		}
		return res ;
}

int main() {


	cout << endl << "Length  : " << max_lenght_without_repeat("pwwkew") << endl;

	return 0;
}
