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
    ListNode* sortList(ListNode* head) {
         
        vector<int> nums1;
        ListNode* l1 = head;
        while(l1 != NULL ){
            int x = l1 ? l1->val:0;  

            nums1.push_back(x);        

            l1 = l1 ? l1->next:NULL;
        }
        sort(nums1.begin(), nums1.end());
        
        ListNode *cr= NULL;
        ListNode *hd= NULL;
        
        int len = nums1.size();
        for(int i = 0 ; i< len;i++){
            if (hd == NULL){
                cr = new ListNode(nums1[i]); 
                hd = cr;
                continue;
            }
            cr->next = new ListNode(nums1[i]);
            cr = cr->next;
        }
        
        return hd; 
             
    }
};