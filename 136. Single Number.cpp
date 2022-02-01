class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int c;
        for(auto x : m){
            if(x.second==1)
                c = x.first;
        }
        return c;
    }
	
	// 1 sốkhi xor với chính nó thì sẽ về 0
	// nếu vector truyền vào lẻ ra 1 số thì kết quả của xor sẽ là số đó
	// ví dụ [2,3,2,5,5] thì phép toán sẽ là 2^3^2^5^5 = 3
	int singleNumberBetter(vector<int>& nums) {
        int _xor = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            _xor ^= nums[i];
        }
        return _xor;
    }
};