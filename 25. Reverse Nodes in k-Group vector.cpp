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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) return head;

        vector<int> nums1;

        ListNode *cr= NULL;
        ListNode *hd= NULL;

        while(head != NULL ){
            int x = head->val;
            nums1.push_back(x);

            if(nums1.size() == k){
                // Reverse the vector
                reverse(nums1.begin(), nums1.end());

                for(std::vector<int>::iterator it = nums1.begin(); it != nums1.end(); ++it){
                    if (hd == NULL){
                        cr = new ListNode(*it); 
                        hd = cr;
                        continue;
                    }
                    cr->next = new ListNode(*it);
                    cr = cr->next;
                }

                nums1.clear();
            }

            head = head?head->next:NULL;
        }

        if(nums1.size() > 0){
            for(std::vector<int>::iterator it = nums1.begin(); it != nums1.end(); ++it){
                cr->next = new ListNode(*it);
                cr = cr->next;
            }
            nums1.clear();
        }

        return hd;
    }
};