#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*left=NULL;
 node*right=NULL;
 node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
 }
};
node*buildtree(node*root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for inserting in left "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the data for inserting in right "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}

void levelordertraversal(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        if(temp=NULL){
            cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<<" ";
    }
    }
int main(){
    node*root=NULL;
    //creating a tree
    root=buildtree(root);
    // level order
    cout<<"printing level order traversal "<<endl;
    levelordertraversal(root);
    return 0;
}
}