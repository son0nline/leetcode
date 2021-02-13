// Author : Son0nline
// Date   : 01/29/2019 17:29
//4. Median of Two Sorted Arrays

#include <algorithm> 
static const auto speedup = []() {std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(std::vector<int>::iterator it = nums2.begin(); it != nums2.end(); ++it){
            nums1.push_back(*it);
        }
        
        sort(nums1.begin(), nums1.end());
        
        int median = nums1.size()/2;
        if(nums1.size()%2 == 1){
            return nums1[median];
        }else{
            return (nums1[median] + nums1[median-1])/2.0;
        }
        
    }
};
