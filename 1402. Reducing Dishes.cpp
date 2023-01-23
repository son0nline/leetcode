class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int vLen = satisfaction.size();
        int vMax=0;
        for (int j = 0; j < vLen; j++) {
            int kq = 0,i  = 1;
            for(int k = j; k< vLen; k++) {
                kq += satisfaction[k]*i;
                i++;
            }
            vMax = vMax>kq?vMax:kq;
        }
        return vMax;
    }
};