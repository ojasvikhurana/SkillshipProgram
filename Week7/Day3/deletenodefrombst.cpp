/*Given a Binary Search Tree (BST) and a node value. Delete the node with the given value from the BST. If no node with value x exists, then do not make any change. */

Node *deleteNode(Node *root,  int X)
{
    if(root==NULL)return root;
    if(root->data==X){
        if(root->left==NULL)return root->right;
        if(root->right==NULL)return root->left;
        Node* temp=root->right;
        root=root->left;
        Node* t=root;
        while(t->right!=NULL)t=t->right;
        t->right=temp;
        return root;
    }
    Node* curr=root;
    while(root){
        if(root->left and root->left->data==X){
            if(root->left->right==NULL){
                root->left=root->left->left;
                return curr;
            }
            if(root->left->left==NULL){
                root->left=root->left->right;
                return curr;
            }
            Node* temp=root->left->right;
            root->left=root->left->left;
            Node* t=root->left;
            while(t->right!=NULL)t=t->right;
            t->right=temp;
            return curr;
        }else if(root->right and root->right->data==X){
            if(root->right->right==NULL){
                root->right=root->right->left;
                return curr;
            }
            if(root->right->left==NULL){
                root->right=root->right->right;
                return curr;
            }
            Node* temp=root->right->right;
            root->right=root->right->left;
            Node* t=root->right;
            while(t->right!=NULL)t=t->right;
            t->right=temp;
            return curr;
        }else{
            if(root->data<X){
                root=root->right;
            }else{
                root=root->left;
            }
        }
    }
    return curr;
}
