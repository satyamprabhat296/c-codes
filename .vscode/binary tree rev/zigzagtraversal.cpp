class solution{
    public:
    vector<int>zigzagtraversal(Node*root){
        vector<int>result;
        if(root==NULL)
        return result;
        queue<Node*>q;
        q.push(root);
        bool lefttoright=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>ans(size);
            //level order
            for(int i=0;i<size;i++){
                Node*frontNode=q.front();
                q.pop();
                int index=lefttoright?i=size-i-1;
                ans[index]=frontNode->data;
                if(frontNode->left)
                q.push(frontNode->left);
                if(frontNode->right)
                q.push(frontNode->right);
            }
            result.push_back(i);
            lefttoright!=lefttoright;

return result;
        }
    };
