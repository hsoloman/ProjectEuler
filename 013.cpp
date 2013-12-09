#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){

    ifstream file("013-input.txt");
    vector<string> numbers;
	{	string temp;
		while( getline(file, temp)){numbers.push_back(temp);}
	}
    
	double sum(0);
	for (string& number : numbers)
	{
		sum += strtod(number.c_str(), 0);
	}

    cout.precision(15);
	cout << "First 10 digits in: " << sum << endl;
	char c;
	cin >> c;
	return 0;
}
