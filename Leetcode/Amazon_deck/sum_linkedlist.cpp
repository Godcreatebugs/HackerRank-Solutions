
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
        /* Some important assumptions:
        List of both the linkedlist may be different and we have to max(m,n) complexity option.
        Carry from sum has to carry forward.(Do it using modulo operation)
        Make a new node every single time you add elements, dynamically allocated memory using constructor.
        use while condition to check both of list hasn;t hit null which is end of op in list.
        */
        int sum =0;
        // res is only a read only memory and commented part below  changing res directly is an error machine
        //It is best to access res using a pointer to res address as it is not read only
        ListNode* res = NULL; // begining with null but store res address where we start our op.
        ListNode** node = &res; //a pointer where we have stored l3  to make op possible.

        /*
        [5]
         [5] should give [0,1] hence we need to make sure sum reduces to 0 and no carry is forwarded
        If sum is zero no need to go ahead and make a new node
        */

        while(l1 != NULL || l2 !=NULL || sum>0){
            if (l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            // This is dangours way to work as we just have res's address for ref and res=res->next is dumb
            //thing to do as it will result in undefined behaviour and maily since res is Read Only Memory
            // We can access it via its address via a pointer to res's address in other words node
            // res = new ListNode(sum%10);
            // sum /=10;
            // res = res->next;
            *node = new ListNode(sum%10); // (*node == res)
            //carry has to get into sum like
            sum /= 10;
            //since we have taken node as a reference
            //remember address is not same as pointer hence *node = &res , dereferncing node won't give you res's adress
            //Only way to change pointer which lies in node and point to next and node's adress changes.
            //Its difficult to process but try to understand it..
            //*node = *node->next
            node =&((*node)->next);
        }
        return res;
    }
};
