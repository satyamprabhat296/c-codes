#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
        Node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};
void levelordertraversal(Node*root){
    queue<Node*q>
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
  if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
q.push(NULL);

            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push (temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
Node*insertintobst(Node*root,int d){
     //base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertintobst(root->right,d);
    }
    else{
        root->left=insertintobst(root->left,d);
    }
    return root;
}
Node*deletefrombst(Node*root,int val){
    //base case 
    if(root==NULL){
        return root;
        if(root->data==val){
            //0 child
            if(root->left==NULL && root->right ==NULL){
                delete root;
                return NULL;
            }
            //1 child
            //left child

            if(root->left!=NULL && root->right==NULL){
                Node*temp=root->left;
                delete root;
                return temp;
            }
            //right child
            if(root->left==NULL && root->right!=NULL){
                Node*temp = root->right;
                delete root;
                return temp;
            }
            //2 child 
            if(root->left!=NULL && root->right!=NULL){
                int mini = minval(root->right->data);
                root->data =mini;
                root->right= deletefrombst(root->right,mini);
                return root;
            }
        }
    }
}
void takeinput( Node* &root){
    int data;
    cin>>data;
    while(data!=-1){

    root= insertintobst(root,data);
    cin>>data;
}
}
int main(){
    Node*root=NULL;
    cout<<"enter data to create BST"<<endl;
    takeinput(root);
    cout<<"printing the BST"<<endl;
    levelordertraversal(root);
    return 0;

}