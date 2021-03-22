// Author : Son0nline
// Date   : 13/01/2021
//9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int r = x;
        long rev =0;
        int a;
        while(r)
        {
            a = r%10;
            r /=10;
            rev = rev*10 + a;
        }
        return x == rev;
    }
};
