// Author : Son0nline
// Date   : 01/29/2019 16:56


static const auto speedup = []() {std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *lnSum = new ListNode(0);
        ListNode *cr = lnSum;
        
        int du = 0, t = 0;
        while(l1 != NULL || l2 != NULL){
            int x = l1 ? l1->val:0;
            int y = l2 ? l2->val:0;
            
            t = x + y + du;            
            du = t/10;
            t %=10;
            cr->next = new ListNode(t);
            cr = cr->next;
            
            l1 = l1 ? l1->next:NULL;
            l2 = l2 ? l2->next:NULL;
        }
        if(du>0){
            cr->next = new ListNode(du); 
        }
        
        return lnSum->next;
    }
};
