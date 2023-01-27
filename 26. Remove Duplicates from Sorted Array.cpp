static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
} ();

class Solution {
public:
    int removeDuplicatesUseMap(vector<int>& nums) {
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
	
	int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() < 2) return nums.size();

        auto k = 0;
        for (ssize_t i = 0; i < nums.size(); ++i) {
            if (nums[k] == nums[i]) continue;

            nums[++k] = nums[i];
        }

        return k + 1;
    }
};