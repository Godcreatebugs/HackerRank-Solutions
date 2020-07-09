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
    ListNode* reverseList(ListNode* head) {
        /*
        MEHOD 1: This is a frequently asked question in interviews and can be done recursively and iteratively.
        Iterative Approach first:
        Traverse untill you hit null and meanwhile take a temp pointer
        and store next pointer of current, then next to next has been given previous pointer
        and current (which is 1st) should point to 2nd and temp which we have stored should point to first element
        */

        ListNode* previous =NULL; //we need both the arrows to reverse linkedlist
        ListNode* current =head;
        while(current != NULL){
            ListNode* temp = current->next; //next to next has to be stored and temp is in while loop cuz it has to change everytime
            current->next = previous; //revversing where 2 should be pointed to and it is previous
            previous = current ; //change head to
            current= temp;
        }
        return previous;// This is where we will get our head which started as null
    }
};
