/*Given a linked list of N nodes. The task is to reverse this list.*/

Node* reverseList(Node *head)
{
    Node* prev=NULL;
    Node*curr = head;
    while(curr->next!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    curr->next=prev;
    return curr;
    
  // Your code here
}
