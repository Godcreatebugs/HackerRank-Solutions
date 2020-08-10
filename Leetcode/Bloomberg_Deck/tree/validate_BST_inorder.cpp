#include <iostream>
#include <stack>
using namespace std;
//treenode struct
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
  int new_ele =INT32_MIN;
  while(!s.empty() || root !=nullptr){
    //poplating only the leftmost part of tree
    while(root!=nullptr){
      s.push(root);
      root =root->left;
    }
    //starting root from below to make a list of numbers in ascendancy
    root = s.top();
    //fasle condition is used in recursion to move ahead and not stop function abruptly
    if(root->val<=new_ele) return false;
    new_ele = root->val;
    root =root->right;
  }
  return true;
}

int main(){
  TreeNode* root = new TreeNode(2);
  TreeNode* right = new TreeNode(3);
  TreeNode* left = new TreeNode(1);

  root->right = right;
  root->left = left;
  cout<<ValidBST(root);
}
