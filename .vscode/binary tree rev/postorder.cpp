// postorder means lRN
#include<iostream>
using namespace std;

int postorder(root){
    //base case
    if(root==NULL)
    return;

postorder(root->left);
postorder(root->right);
cout<<root->data<<endl;
}
int main(){
    cout<<"postorder traversal is:"<<endl;
    postorder(root);
}