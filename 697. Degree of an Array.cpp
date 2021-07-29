class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int maxFreq = 0;
        unordered_map<int,int> degree;
        unordered_map<int,int> firstOcc;
        unordered_map<int,int> lastOcc;
        int sSize = nums.size();
        int minLen = sSize;
        int num = 0;
        for (int i = 0; i < sSize; i++){
            num = nums[i];
            degree[num]++;

            if (firstOcc.find(num) == firstOcc.end())
                firstOcc[num] = i;

            lastOcc[num] = i;

            if (degree[num] > maxFreq){
                maxFreq = degree[num];
                minLen = lastOcc[num] - firstOcc[num] + 1;
            }
            else if (degree[num] == maxFreq){
                minLen = min(minLen, lastOcc[num] - firstOcc[num] + 1);
            }
        }
        
        return minLen;
    }
};
