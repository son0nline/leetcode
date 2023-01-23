class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int vLen = satisfaction.size();

        int kqList=0;
        for (int j = 0; j < vLen; j++) {
            int kq = 0;
            int i  = 1;
            for(int k = j; k< vLen; k++) {
                kq += satisfaction[k]*i;
                i++;
            }
            kqList = kqList>kq?kqList:kq;
        }

        return kqList;
    }
};