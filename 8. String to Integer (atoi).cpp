class Solution {
public:
    int myAtoi(string s) {

        int i = 0, flag = 0, strLen = s.size();

        while(i < strLen) {
            if(s[i] == ' ') i++;   
            else break;       
        }
        if(s[i] == '-') {
            flag = 1;
            i++;
        }
        else if(s[i] == '+') i++;

        long long num = 0;
        for(int j=i; j< strLen; j++) {
            if(s[j] >= '0' and s[j] <= '9') {
                
                int ic = s[j] - '0';
                // trick char[9->1] subtract char '0' to get int 
                // ASCII of '9' is 39 and ASCII of '0' is 30 
                // '9' - '0' mean 39 - 30 => 9

                num *= 10;
                num += ic;

                if(num >= INT_MAX) break;
            }
            else break;
        }
        
        if(flag) num *= -1;
        if(num <= INT_MIN) 
            return INT_MIN;
        else if(num >= INT_MAX) 
            return INT_MAX;

        return num;
    }
};