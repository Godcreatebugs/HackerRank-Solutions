#include <iostream>
#include <stack>
using namespace std;
//treenode struct
/*
Why this solution is better?
-> It is in a way faster than recursive solution even though time complexity is asymptotically same.
-> The reason is here the detection of failure is easy.The worst case only happens when rogue element is right most element
-> And space complxity is same but instead of recursive calls taking up space to store true and false we need a stack and stack op are faster.
*/



struct TreeNode{
  int val;
  TreeNode* right;
  TreeNode* left;
  // {} and () both are valid for intialize list
  TreeNode() : val{0},right{nullptr},left{nullptr} {}
  TreeNode(int value) : val{value},right{nullptr},left{nullptr} {}
  TreeNode(int value,TreeNode* right_ptr) : val{value},right{right_ptr},left{nullptr} {}
  TreeNode(int value,TreeNode* right_ptr,TreeNode* left_ptr) : val{value},right{right_ptr},left{left_ptr} {}
  //bool ValidTree(TreeNode* root);
  //bool Helper(TreeNode* Node,int low,int upper);
};
//stack implementation as we need lifo system


bool ValidBST(TreeNode* root){
  stack<TreeNode*> s;
  // int prev =INT32_MIN;
  //optional helps to create an object only when needed prev will alwasy contain a value of 0 and it will give trouble in case [-2147483648]. 
   optional <int> prev;
  while(!s.empty() || root !=nullptr){
    //poplating only the leftmost part of tree
    // we have to consider a case where root = root->root->right is going to give nullptr
    while(root!=nullptr){
      s.push(root);
      root =root->left;
    }
    //starting root from below to make a list of numbers in ascendancy
    //pop element so wont be in stack anymore
    root = s.top(),s.pop();
    //fasle condition is used in recursion to move ahead and not stop function abruptly
    if(root->val<=prev) return false;
    prev = root->val;
    root = root->right;
  }
  return true;
}

int main(){
  TreeNode* root = new TreeNode(5);
  TreeNode* right = new TreeNode(8);
  TreeNode* left = new TreeNode(1);
  TreeNode* right2 =new TreeNode(9);
  TreeNode* left2 =new TreeNode(6);

  root->right = right;
  root->left = left;
  right->right = right2;
  right->left =left2;
  cout<<ValidBST(root);
}
