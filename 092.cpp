#include <iostream>
#include <cmath>
using namespace std;

int sum_square_digits(int input){
	double sum = 0;
	while(input != 0){
		sum += pow((input%10), 2);
		input /= 10;
	}
	return sum;
}

int chained_sum_square_digits(int input){
	while (input != 1 && input != 89){
		input = sum_square_digits(input);
	}
	return input;
}

int q92() {

	int count = 0;

	for (int i = 1 ; i <= 10000000 ; i++){
	//	cout << "i: " << i << ", chainedsumsquare: " << chained_sum_square_digits(i) << endl;
		if (chained_sum_square_digits(i) == 89) count++;
	}

	cout << count << " numbers below ten million that will arrive at 89." << endl;

	char c;
	cin >> c;
	return 0;
}
