/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
static const auto speedup = []() {std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();

class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> nums1;
        
        while(head != NULL ){
            int x = head ? head->val:0;
            nums1.push_back(x);
            head = head ? head->next:NULL;
        }
        
        int vLen = nums1.size();
        int loop = nums1.size()/2;
        int kq = 0;
        for (int i = 0; i < loop; i++){
            kq = max(kq,nums1[i] + nums1[vLen-i-1]);
        }
        
        return kq;
    }
};