/*You are given a Singly Linked List with N nodes where each node next pointing to its next node. You are also given M random pointers , where you will be given M number of pairs denoting two nodes a and b  i.e. a->arb = b.*/

Node *copyList(Node *head) {
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=temp;
        curr=temp;
    }
    curr=head;
    while(curr!=NULL and curr->next!=NULL){
        if(curr->arb==NULL)curr->next->arb=NULL;
        else curr->next->arb=curr->arb->next;
        curr=curr->next->next;
    }
    Node*newhead=head->next;
    Node*oldhead=head;
    curr=newhead;
    while(curr->next!=NULL and curr!=NULL and oldhead!=NULL and oldhead->next!=NULL){
        oldhead->next=oldhead->next->next;
        curr->next=curr->next->next;
        oldhead=oldhead->next;
        curr=curr->next;
    }
    oldhead->next=oldhead->next->next;
    return newhead;
    // Your code here
}