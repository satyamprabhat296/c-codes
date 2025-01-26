///inorder means LNR
#include<iostream>
using namespace std;
int inorder(root){
    //base case
    if(root==NULL)
    return;

inorder(root->left);
cout<<root->data<<"";
inorder(root->right); 
}

int main(){
    cout<<"inorder traversal is:"<<endl;
    inorder(root);
    return 0;
}