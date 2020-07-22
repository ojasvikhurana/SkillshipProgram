/*Given a binary tree, return the inorder traversal of its nodes' values.*/

vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root==NULL)return v;
        stack<TreeNode*>s;
        while(!s.empty() or root!=NULL){
            while(root!=NULL){
                s.push(root);
                root=root->left;
            }
            root=s.top();
            s.pop();
            v.push_back(root->val);
            root=root->right;
        }
        return v;
    }