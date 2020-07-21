/*Given a BST,  and a reference to a Node x in the BST. Find the Inorder Successor of the given node in the BST.*/

Node * inOrderSuccessor(Node *root, Node *x)
{
    //Your code here
    if(root==NULL)return root;
    stack<Node*>s;
    Node* curr = root;
    Node* temp=NULL;
    while(!s.empty() or curr){
        while(curr){
            s.push(curr);
            curr=curr->left;
        }
        if(temp!=NULL and temp==x){
            if(!s.empty())return s.top();
            return NULL;
        }
        temp = s.top();
        s.pop();
        curr=temp->right;
    }
    return NULL;
}
