// Author : Son0nline
// Date   : 01/02/2022
// 21. Merge Two Sorted Lists

// 0ms runtime
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
            return l1;
        
        if(l1 == NULL)
            return l2;
        
        if(l2 == NULL)
            return l1;
        
            
        ListNode *cr= NULL;
        ListNode *hd= NULL;
        
        int x;
        int y;
        while(l1 != NULL && l2 != NULL ){
            x = l1 ? l1->val:0;  
            y = l2 ? l2->val:0;            

            if (hd == NULL) {
                if (x <= y){                
                    cr = new ListNode(x); 
                    
                    l1 = l1 ? l1->next:NULL;
                }
                else{
                    cr = new ListNode(y);
                    l2 = l2 ? l2->next:NULL;
                }
                hd = cr;
            }
            else{
                if (x <= y){                
                    cr->next = new ListNode(x); 
                    
                    l1 = l1 ? l1->next:NULL;
                }
                else{
                    cr->next = new ListNode(y);
                    l2 = l2 ? l2->next:NULL;
                }
                cr = cr->next; 
            }
        }
        
        if(l1 != NULL ){
            cr->next = l1;
        }
        
        if(l2 != NULL ){
            cr->next = l2;
        }
        
        
        return hd;        
    }
};
