// Author : Son0nline
// Date   : 01/29/2019 17:29


static const auto speedup = []() {std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int s = nums.size();   
        int sum;
            for (int i = 1; i < s; i++)
             {
                sum = target - nums[i];
                 for (int j = 0; j < i; j++)
                 {
                    if (nums[j] == sum)
                    {
                        return {j,i};
                    }
                 }
             }
        return {};
    }
};
