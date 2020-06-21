/*Given two lists sorted in increasing order, create a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.
*/


Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* newhead=new Node(0);
    Node* temp=newhead;
    while(head1!=NULL and head2!=NULL){
        if(head1->data==head2->data){
            temp->next=head1;
            head1=head1->next;
            temp->next->next=NULL;
            temp=temp->next;
            head2=head2->next;
        }
        else if(head1->data<head2->data){
            head1=head1->next;
        }else{
            head2=head2->next;
        }
    }
    return newhead->next;
}