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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //unordered_map<int, int> m1;
        map<int, int> m1;

        while(head != NULL ){
            int x = head ? head->val:0;

            m1[x];        

            head = head ? head->next:NULL;
        }
        
        ListNode *cr= NULL;
        ListNode *hd= NULL;

        for (auto& it : m1) {
            if (hd == NULL){
                cr = new ListNode(it.first); 
                hd = cr;
                continue;
            }
            cr->next = new ListNode(it.first);
            cr = cr->next;
        }
        
        return hd;
    }
};