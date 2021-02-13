static const auto speedup = []() {std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();
class Solution {
public:
    int reverse(int x) {
        
        int min = pow(-2,31);
        int max = pow(2,31)-1;
        if (x >= max || x <= min)
        {
            return 0;
        }
        
        int revI = 0;
        int j = 0;
        int negative = 1; 
        if(x<0){
            negative = -1;
            x = x*negative;
        }

        while(x>0){
            j = x%10;
            x = x/10;		
            
            if (revI > (max/10)) 
                return 0;
            revI = (revI*10)+j;
        }
        return revI*negative;
    }
};
