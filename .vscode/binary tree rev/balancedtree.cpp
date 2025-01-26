#include<iostream>
using namespace std;
class solution{
    private:
    int height(struct Node*node){
        //base case
        if(node==NULL)
        return 0;
    
    int left= height(node->left);
    int right=height(node->right);
    int ans= max(left,right)+1;
    return ans;
}
public:

 bool isbalanced(Node*root){
    if(root==NULL)
    return true;
bool left =isbalanced(root->left);
bool right=isbalanced(root->right);
bool diff = abs(height(root->left)-height(root->right)<=1);
if(left && right&& diff){
    return 1;
}
else{
    return false;
}
 