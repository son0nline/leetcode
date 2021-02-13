#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#include <algorithm>    // std::sort

#include <vector> //vector
using namespace std;

int main(){
	
	vector<int> v; 
	
	for(int i = 1 ; i< 10 ; i++)
		v.push_back(i);
	
	sort(v.begin(), v.end());
	
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
    
    
    
	return 0;
}

