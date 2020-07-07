
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      //constructors
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res_node = new ListNode(); //allocation of memory on heap
        res_node->data =0;
        res_node->next =null;

        while(l1->next != null && l2->next  != null ){

            if(l1->val + l2->val <9){
                res_node->val = l1->val + l2->val;
                res_node->p
            }
        }
    }
};
