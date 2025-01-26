class so;ution{
    public:
    int maxdepth(treeNode*root){
        if(root==NULL) return 0;
        int left=maxdepth(root->left);
        int right=maxdepth(root->right);
        int ans= max(left,right)+1;
        return ans;
    }
};