/*Given a Binary Search Tree. The task is to find the minimum element in this given BST. If the tree is empty, there is no minimum elemnt, so print -1 in that case.*/
int minValue(Node* root)
{
    // Code here
    if(root==NULL)return -1;
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}