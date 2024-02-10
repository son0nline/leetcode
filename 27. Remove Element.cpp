class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v1;
        int s = nums.size();
        if(s == 0)
            return s;
            
        for (int i = 0; i < s; i++)
        {
            if (nums[i]!=val) {
                v1.push_back(nums[i]);
            }
        }
        nums = v1;
        return v1.size();
    }
    
    int removeElement_fast(vector<int>& nums, int val) {
        
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};