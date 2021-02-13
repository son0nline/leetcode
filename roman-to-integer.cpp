// Author : Son0nline
// Date   : 2021-02-13

/********************************************************************************** 
* 
* Given a roman numeral, convert it to an integer.
* 
* Input is guaranteed to be within the range from 1 to 3999.
*               
**********************************************************************************/
class Solution {
public:
    int GetValue(char roman){
        //I, V, X, L, C, D, M
        int rs;
        switch(roman){
            case 'I': rs = 1;break;
            case 'V': rs = 5;break;
            case 'X': rs = 10;break;
            case 'L': rs = 50;break;
            case 'C': rs = 100;break;
            case 'D': rs = 500;break;
            case 'M': rs = 1000;break;            
            default: rs = 0;
        }
        return rs;
    }
    
    int RomanCompare(char roman1,char roman2){
        if(roman1 == roman2){
            return 0;
        }
            
        if( GetValue(roman1) > GetValue(roman2))
            return 1;
        return -1;
    }
    
    int romanToInt(string s) {
        std::string str = s;
        int j = 0;
        int result = 0;
        int max = str.size();
        
        for (int i = 0; i < max; i++){
            j = i + 1;
            
            if(j == max) {
                result += GetValue(str[i]);
                break;
            }
            
            if(RomanCompare(str[i],str[j]) < 0) {
                result -= GetValue(str[i]);
            } else {
                result += GetValue(str[i]);
            }            
        }
        return result;
    }
};
