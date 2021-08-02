#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#include <algorithm>    // std::sort

#include <vector> //vector
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);
int main(){
	
	vector<int> v; 
	
	for(int i = 1 ; i< 10 ; i++)
		v.push_back(i);
	
	sort(v.begin(), v.end());
	
    for (int i = 0; i < v.size(); i++) 
        cout << v[i]	 << " "; 
    
    cout << "\n "; 
    vector<int> c{ 1,2,7,11,15};
    twoSum(c,9);
	return 0;
}

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoSumIdx;
        int sSize = nums.size();
        for (int i = 0; i < sSize-1; i++) {
            for (int j = i+1; j < sSize; j++) {
                if((nums[i]+nums[j]) == target){
                    twoSumIdx.push_back(i);
                    twoSumIdx.push_back(j);
                    break;
                }
            
            }
        }        
        return twoSumIdx;
    }

