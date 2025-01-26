

// inorder
// LNR//
void inorder(node*root){
    //base case
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right)
}

// postorder
void postorder(node*root){
    // base case
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


  //preorder

  void preorder(node*root){
    // base case
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
  }