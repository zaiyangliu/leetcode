/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution{
public:
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2){
    ListNode *head = new ListNode(0);
    ListNode *ptr = head;
    while(l1 != NULL || l2 != NULL){
      ListNode *current = NULL;
      if(l1 == NULL){
	current = l2;
	l2 = l2 -> next;
      }
      else if(l2 == NULL){
	current = l1;
	l1 = l1 -> next;
      }
      else if(l1 == NULL && l2 == NULL){
	return NULL;
      }
      else{
	if(l1 -> val < l2 -> val){
	  current = l1;
	  l1 = l1 -> next;
	}
	else{
	  current = l2;
	  l2 = l2 -> next;
	}
      }
      ptr -> next = current;
      ptr = ptr -> next;
    }
    return head -> next;
  }
};
