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
        stack<int> st;

        ListNode *fast = head, *slow = head;

        while(slow) {
            for (int i = 0; i < k; i++) {
                st.push(fast->val);
                fast = fast->next;
				
                if (!fast && i < (k - 1)) 
					return head;
            }

            for (int i = 0; i < k; i++) {
                slow->val = st.top();
                slow = slow->next;
                st.pop();
            }
        }

        return head;
    }
};