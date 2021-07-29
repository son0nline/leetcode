#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
  
int main() 
{
	//https://leetcode.com/problems/degree-of-an-array/submissions/
	vector<int> nums{ 1,2,2,3,1,4,2 };
	
	int cache[50000][2]; // {first index of occurance, freq of num} 
	memset(cache, -1, sizeof(cache));

	int maxFreq = 0, minLen = nums.size();	
	
	for(int i = 0; i < nums.size(); i++)
	{
		if(cache[nums[i]][0] == -1)
			cache[nums[i]][0] = i, cache[nums[i]][1] = 1;
		else
			cache[nums[i]][1]++;
		if(maxFreq == cache[nums[i]][1])
			minLen = min(minLen, i - cache[nums[i]][0] + 1);
		else if(maxFreq < cache[nums[i]][1])
		{
			minLen = i - cache[nums[i]][0] + 1;
			maxFreq = cache[nums[i]][1];
		}
		
	}
	return minLen;
}
