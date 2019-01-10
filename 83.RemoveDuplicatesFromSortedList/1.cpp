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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *behind;
        ListNode *curr;
        curr = head;
        while(curr->next){
            behind = curr->next;
            if(curr->val == behind->val){
                curr->next = behind->next;
                behind = behind->next;
            }
            else
                curr = behind;
            
        }
        return head;
    }
};
