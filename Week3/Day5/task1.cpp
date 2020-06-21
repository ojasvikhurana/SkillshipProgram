/*Given a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.*/

bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)return true;
   Node* temp=head;
   while(temp!=NULL){
       temp=temp->next;
       if(temp==head)return true;
   }
   return false;
}
