// Author : Son0nline
// Date   : 01/02/2022
// 21. Merge Two Sorted Lists

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


#include <algorithm> 
static const auto speedup = []() {std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
            return l1;
        
        if(l1 == NULL && l2 != NULL)
            return l2;
        
        if(l1 != NULL && l2 == NULL)
            return l1;
        
        vector<int> nums1;
        
        while(l1 != NULL ){
            int x = l1 ? l1->val:0;  

            nums1.push_back(x);        

            l1 = l1 ? l1->next:NULL;
        }
        
        while(l2 != NULL ){
            int y = l2 ? l2->val:0;     

            nums1.push_back(y);            

            l2 = l2 ? l2->next:NULL;
        }
        
        sort(nums1.begin(), nums1.end());
    
        ListNode *cr= NULL;
        ListNode *hd= NULL;
        
        for(std::vector<int>::iterator it = nums1.begin(); it != nums1.end(); ++it){
            if (hd == NULL){
                cr = new ListNode(*it); 
                hd = cr;
                continue;
            }
            cr->next = new ListNode(*it);
            cr = cr->next;
        }
        return hd;        
    }
};
