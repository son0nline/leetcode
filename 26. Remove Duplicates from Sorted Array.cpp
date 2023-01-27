static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
} ();

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mymap;
        vector<int>::iterator it = nums.begin();
        while (it != nums.end())
        {
            mymap[*it]=*it;
            ++it;
        }
        int counter = 0;
        for (auto& i : mymap) {
            nums[counter] = i.first;
            counter++;
        }
        return mymap.size();
    }
};