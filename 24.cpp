#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

std::ostream& operator<<( std::ostream& os, const vector<int>& ints){
	for(vector<int>::const_iterator it = ints.begin() ; it != ints.end() ; it++){
		cout << *it;
	}
	return os;
}

int q24() {
	vector<int> digits;
	for (int i = 0; i < 10 ; i++){
		digits.push_back(i);
	}
	std::sort(digits.begin(), digits.end());
	cout << digits << endl;
	
	for (int i = 1 ; i < 1000000 ; i++){
		std::next_permutation(digits.begin(), digits.end());	
	}
	
	
	// this is the 1 millionth lexicographical permutation
	cout << digits << endl;


	char c;
	cin >> c;
	return 0;
}
