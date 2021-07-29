class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        vector<int> candyTypeOld = candyType;
        
        sort( candyType.begin(), candyType.end() );
        candyType.erase(unique(candyType.begin(), candyType.end()),candyType.end());
        
        unsigned int haltType = (unsigned int )(candyTypeOld.size()/2);        
        unsigned int sUniq = (unsigned int)candyType.size();
        
        if(sUniq <= haltType){
            return sUniq;
        }
        return haltType;
    }
    
};
