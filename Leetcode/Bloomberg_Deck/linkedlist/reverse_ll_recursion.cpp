#include <iostream>
using namespace std;

//listnode constructor
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 ListNode* ReverseLL(ListNode* head){
   //this is iterative sol and we need to store prev, curr and curr->next to swap pointers
   ListNode* prev =nullptr;
   ListNode* curr =head;
   while(curr!=nullptr){
     //save curr->next in temp as we are going to change it with prev but before that it is assigned earlier to prev
     ListNode* tmp = curr->next;
     //curr->next has been changed already
     curr->next = prev;// assigning prev to current->next
     //move ahead
     prev = curr;
     //not curr = curr->next cuz we hav elaready changed curr->next
     curr = tmp;
   }
   while(prev!=nullptr){
     cout<<prev->val<<" ";
     prev= prev->next;
   }
   return prev;
 }

 int main(){
   ListNode* head = new ListNode(1);
   ListNode* a = new ListNode(2);
   ListNode* b = new ListNode(3);
   head->next =a;
   a->next = b;
   b->next = nullptr;
   ListNode* res = ReverseLL(head);


 }
