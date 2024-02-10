class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add = 1;
        int idx = digits.size()-1;
        for( ;idx>=0;idx--){
            if(add == 0)
                break;               

            if(digits[idx]==9){
                digits[idx] = 0;                
            }else{
                digits[idx] = digits[idx]+1;
                add = 0;
            }
        }
        if (add == 1){
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};