#include <iostream>
#include <unordered_map>

using namespace std;

long long collatz_length(long long n)
{   
	static unordered_map<long long, long long> map;
	long long count = 1;
	long long originalN = n;

	while(n != 1 && !map.count(n)){
		if (n%2){
			n = 3*n+1;
		} else {
			n /= 2;
		}
		count++;
	}

	if (map.count(n)){ 
		count += map[n];
	}

	map[originalN] = count;
	return count;
}

int main()
{   
	long long bestN = 0;
	long long longestSequence = 0;

	for (long long i = 1 ; i < 1000000 ; i++){

		if (collatz_length(i) > longestSequence){
			bestN = i;
			longestSequence = collatz_length(i);
		}   
	}

	cout << "Best N:" << bestN << endl;

	char c;
	cin >> c;
	return 0;
}
