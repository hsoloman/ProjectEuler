#include <iostream>

using namespace std;

int main()
{
	long long sum = 1;
     
	for (int i = 1 ; i <=20 ; i++){
		sum *= (i + 20);
		sum /= i;
   	}
   
   	cout << sum;

   	return 0;
}
