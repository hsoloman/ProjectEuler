#include <iostream>
#include <cmath>
using namespace std;

int number_of_divisors(int input){
	int result = 0;
	int root = (int)sqrt(input);

	for (int i = 1 ; i <= root ; i++){
		if (input%i == 0) result+=2; 
	}

	if (root*root == input) result-=1;

	return result;
}

int q12() {
	int triangle = 0;
	int index = 0;

	while (1){
		index++;
		triangle += index;

		if (number_of_divisors(triangle) > 500){
			cout << "first trangle number with >500 divisors: "
				<< triangle << endl;
			break;
		}
	}

	char c;
	cin >> c;
	return 0;
}
