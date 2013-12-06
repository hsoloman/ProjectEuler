// solution to project Euler #97

#include <iostream>
using namespace std; 


int q97() {

	long long num = 1;
	for (int i = 0 ; i < 7830457 ; i++){
		num *= 2;
		num = num % 10000000000;
	}

	num = num*28433 + 1;

	cout << "The prime shares the last 10 digits with: " << num << endl;

	char c;
	cin >> c;

	return 0;
}
