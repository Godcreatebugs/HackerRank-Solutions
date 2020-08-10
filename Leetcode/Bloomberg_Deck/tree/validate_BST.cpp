#include <iostream>
using namespace std;

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
bool Helper(TreeNode* node,int low,int upper){
if(node==NULL) return true;
int value = node->val;
//strictly greater than is given in question
//remember it was a mistake to directly pin the right and left pointer so take lower and upper value as to check if condition
// if(node->right!=NULL && value<=low) return false;
// if(node->left!=NULL && value>=upper) return false;
//recursive calls for subtrees
if(low!=NULL && value<=low) return false;
if(upper!=NULL && value>=upper) return false;
if(!Helper(node->right,value,upper)) return false;
if(!Helper(node->left,low,value))return false;
return true;
}
bool ValidTree(TreeNode* root){
Helper(root,NULL,NULL);
}

int main(){
//below is valid tree
TreeNode* root = new TreeNode(5);
TreeNode* right = new TreeNode(8);
TreeNode* left = new TreeNode(1);
TreeNode* right2 =new TreeNode(9);
TreeNode* left2 =new TreeNode(6);

root->right = right;
root->left = left;
right->right = right2;
right->left =left2;
cout<<ValidTree(root);
}
