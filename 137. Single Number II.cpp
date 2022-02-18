class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        
        map<int, int> m1;
        int sSize = nums.size();
        
        int i = 0;
        while(i<sSize){
          m1[nums[i]]++;
          i++;
        }
        
        for (auto& it : m1) {
            if (it.second == 1) {
                return it.first;                
            }
        }
        
        return 0;
    }
};