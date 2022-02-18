class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
                
        unordered_map<int, int> m1;
        int sSize = nums.size();
        
        for(int i = 0; i< sSize; i++){
            m1[nums[i]]++;
        }
        
        vector<int> rs;
        for (auto& it : m1) {
            if (it.second == 1) {
                rs.push_back(it.first);
            }
        }
        
        return rs;
    }
};