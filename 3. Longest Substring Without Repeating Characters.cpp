// Author : Son0nline
// Date   : 01/25/2019 17:34

static const auto speedup = []() {std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if (s.empty())
            return 0;
        
        unordered_map<char, int> map;
        int maxLen = 0;
        int current = -1;
        
        for (int i = 0; i < s.size(); ++i) {            
            char c = s[i];
            if (map.count(c) > 0 && map[c] > current)
                current = map[c];
            
            map[c] = i;
            maxLen = max(maxLen, i - current);
        }
        
        return maxLen;
    }
};
