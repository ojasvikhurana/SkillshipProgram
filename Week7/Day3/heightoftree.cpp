/*Given a binary tree, find its height.*/

int height(Node* root)
{
    if(root==NULL)return 0;
    int count=0;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==NULL){
            count++;
            if(!q.empty())q.push(NULL);
        }else{
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
   return count;
}

