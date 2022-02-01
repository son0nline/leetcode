#include <iostream>
#include <stdio.h>
//using namespace std;
using std::cout;

int isPrime(int n){	
	for (int i = 2; i <= n / 2; ++i) {
	    if (n % i == 0) {
	        return 0;
	    }
	}
    return 1;
}

int main(){
	
	int numPrimes=0;
	for (int i = 2; i < 250001; i++)
	{
		numPrimes+=isPrime(i);
	}

	cout<<"\n"<<numPrimes;
	return 0;
}





        

