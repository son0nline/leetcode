#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	
	printf ("2 ^ 31 = %f\n", pow (2, 31) );
	//2147483648
	//1534236469
	//964632435
	
	
	    int min = pow(-2,31);
        int max = pow(2,31)-1;
        cout<<max<<"\n";
        cout<<min<<"\n";
        
	int i = 1235;
	
	int revI = 0;
	int j = 0;
	int negative = 1; 
	if(i<0){
		negative = -1;
		i = i*negative;
	}
	
	while(i>0){
		j = i%10;
		i = i/10;		
		revI = (revI*10)+(j);
	}
	
	
	cout<<revI*negative;
	return 0;
}

