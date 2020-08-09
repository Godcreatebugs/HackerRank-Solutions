#include <iostream>
// #include <>
using namespace std;
//NULL is manifested constant in C int(x) can be null and int* x can also be null
//but nullptr are built for pointers only it can only be int* x =nullptr and int x =nullptr is invalid
struct Node{
  int val;
  Node* next;
  //constructor
  Node() : val{0},next{nullptr}{}
  Node(int val) : val{val},next{nullptr}{}
  Node(int val,Node* next) : val{val} , next{next}{}
};

Node* AddNum(Node* l1,Node* l2){
  int sum = 0;
  Node* res =NULL;
  Node** node =&res;

  while(l1!=NULL || l2!=NULL || sum>0){
    //seprate condition is must have cuz length of LL need not be same
    if(l1!=NULL){
      sum += l1->val;
      l1 =l1->next;
    }
    if(l2!=NULL){
      sum +=l2->val;
      l2 = l2->next;
    }
    // *node==&res but
    *node = new Node(sum%10);
    sum /= 10; //for carry
    //*node is address of a type pointer and so I can use -> operator
    node = &((*node)->next);
  }
  while(res !=nullptr){
    cout<<res->val<<" ";
    res =res->next;
  }
  return res;
}

int main(){
  Node* first = new Node(1);
  Node* second =new Node(2);
  Node* third =new Node(3);
  first->next = second;
  second->next = third;
  third->next = nullptr;
  Node* first1 = new Node(9);
  Node* second1 =new Node(9);
  Node* third1 = new Node(9);
  first1->next = second1;
  second1->next =third1;
  third1->next =nullptr;
  AddNum(first,first1);
}
