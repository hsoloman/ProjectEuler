// solution to project Euler #112

#include <iostream>
using namespace std; 

enum NumberType {NONE, INCREASING, DECREASING};

bool is_bouncy(int num) 
{
	int digit = 0;
	NumberType type = NONE;

	digit = num%10;
	num = num/10;

	while (num != 0) {
		if (num%10 > digit){
			if (type == DECREASING) return true;
			type = INCREASING;
		} else if (num%10 < digit){
			if (type == INCREASING) return true;
			type = DECREASING;
		}

		digit = num%10;
		num = num/10;
	}
}

int main() {

	int input = 0; int count = 0;
	
	while(1){
	//	cout << input << " - " << count/(double)input*100.0 << "%\n";
		
		if (is_bouncy(input)) {count++;} 		
		if ((double)count/(double)input >= 0.99) {
			cout << "input required: " << input << "\n";
			break;
		} 
	
		input++;
	}


	char c;
	cin >> c;

	return 0;
}
