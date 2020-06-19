/*Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.*/

int getNthFromLast(Node *head, int n)
{   
    Node*temp=head;
    for(int i=1;i<n;i++){
        if(temp->next==NULL)
        return -1;
        temp=temp->next;
    }
    Node* temp2=head;
    while(temp->next!=NULL){
        temp=temp->next;
        temp2=temp2->next;
    }
    return temp2->data;
}

