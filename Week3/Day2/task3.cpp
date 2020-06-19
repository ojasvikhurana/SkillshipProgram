/* Given a linked list of N nodes. The task is to check if the the linked list has a loop. Linked list can contain self loop.*/

int detectloop(Node *head) {
    Node*slow=head;
    Node* fast=head;
    while(fast->next!=NULL and fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}