#include <iostream>
#include <cmath>
using namespace std;

// Combinations fn copied from internet
int Combinations(unsigned int n, unsigned int k)
{
	if (k > n)
		return 0;
	long r = 1;
	for (unsigned int d = 1; d <= k; ++d)
	{
		r *= n--;
		r /= d;
	}
	return r;
} 


int q85() {
	const int target = 2000000;
	int bestX = 0; int bestY = 0; int leastDiff = INT_MAX;

	for (int x = 1 ; x <= 2000 ; x++){
		for (int y = 1 ; y <= 2000 ; y++){  // up to 2000 because (2000 +1)C2 * (1 + 1)C2 > 2mil
			int diff = abs(Combinations(x+1, 2)*Combinations(y+1, 2) - target);
			if (diff < leastDiff){
				bestX = x;
				bestY = y;
				leastDiff = diff; 
			}
		}
	}

	cout << "X:" << bestX << ", Y:" << bestY << ", Area:" << bestX*bestY << endl;

	char c;
	cin >> c;
	return 0;
}
