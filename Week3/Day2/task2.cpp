/* Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, 
if given linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print the second middle element.
For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.*/

int getMiddle(Node *head)
{
   Node* slow=head;
   Node* fast=head;
   while(fast->next!=NULL and fast->next->next!=NULL){
       fast=fast->next->next;
       slow=slow->next;
   }
   if(fast->next!=NULL)slow=slow->next;
   return slow->data;
}