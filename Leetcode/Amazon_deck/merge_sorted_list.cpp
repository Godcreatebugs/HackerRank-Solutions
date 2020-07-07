/** Piyush Bhuva 7/7 using traversal
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*

*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode res(INT_MIN);
        ListNode *tail = &res;
        //basically here we are only concerned with l1 and l2 not being null cuz otherwise we just have to attach rest
        //of the elements from respective lists
        /*
        WE are making an physical node and tail pointer is pointing to that node and then check wether one of list is null or not
        And till that we made comparison for l1 and l2 and went ahead. tail has to traverse ahead as well that is why tail =tail->next.
        At the very last we have to return whichever is not null and attach to them.
        Since, res was min and first node in list we have to return next element of the list.


        Could I have used a dynamic memory allocation for this??
        May be at beginning the pointer and of type node and a location of that node.
        Then everytime we satisfy the condition of comparison then we make a space for node and next should be pointed using address.
        tail =tail->next condition forget about that.
        And the very last we will return node as a pointer but after making sure that both l1 and l2 has reached null.
        */
        while (l1 && l2){
            if(l1->val < l2->val){
                //tail has to point to l1
                tail->next = l1;
                l1 = l1->next;
            }
            else{
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        tail->next =l1?l1:l2;
        return res.next;
    }
};
