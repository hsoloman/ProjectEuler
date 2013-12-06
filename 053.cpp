#include <iostream>
using namespace std;

double Combinations(unsigned int n, unsigned int k)
{
        if (k > n)
                return 0;
        double r = 1;
        for (unsigned int d = 1; d <= k; ++d)
        {
                r *= n--;
                r /= d;
        }
        return r;
} 

int q53(){
	int count = 0;

	for (int i = 0; i <= 100 ; i++){
		for (int j = 0 ; j <= i ; j++){
			if (Combinations(i, j) > 1000000) count++; 	
		} 
	}

	cout << count << " values of nCr greater than 1million" << endl;
	char c;
	cin >> c;
	return 0;
}
