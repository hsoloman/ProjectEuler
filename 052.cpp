#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>

using namespace std;

bool are_anagrams(int a, int b)
{
	string str_a(to_string(a)), str_b(to_string(b));
	sort(str_a.begin(), str_a.end());
	sort(str_b.begin(), str_b.end());

	return (str_a == str_b);
}

bool is_anagram_of_multiples(int num)
{   
	for (int i  = 2 ; i <= 6 ; i++){
		if(!are_anagrams(num, num*i)) return false;
	}
	return true;
}

int main()
{
	int result = 2;

	while(!is_anagram_of_multiples(result)){
		result++;
	}

	cout << result << endl;

	char c;
	cin >> c;
	return 0;
}
