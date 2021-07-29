#include <algorithm>

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = (unsigned int )(candyType.size() / 2);
        
        
        std::sort(candyType.begin(),  candyType.end());
        
        int prev = 0xFFFFFFFF;
        int candyTypes = 0;
        for (auto c : candyType)
        {
            if (c != prev)
            {
               candyTypes++;
               prev = c; 
            }
        }

        if (candyTypes > n)
        {
            return n;
        }
        
        return candyTypes;
        
    }
};
