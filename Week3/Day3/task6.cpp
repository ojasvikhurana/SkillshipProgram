/* Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.*/

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* t1=head1;
    Node* t2=head2;
    int count1=1,count2=1;
    while(t1!=NULL){
        count1++;
        t1=t1->next;
    }
    while(t2!=NULL){
        count2++;
        t2=t2->next;
    }
    t1=head1,t2=head2;
    if(count1>count2){
        for(int i=1;i<=count1-count2;i++)t1=t1->next;
    }else{
        for(int i=1;i<=count2-count1;i++)t2=t2->next;
    }
    while(t1!=NULL and t2!=NULL){
        if(t1==t2)return t1->data;
        t1=t1->next;
        t2=t2->next;
    }
}

