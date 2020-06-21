/* Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. If all the nodes in the linked list are equal, then remove n-1 nodes.*/

Node * removeDuplicates( Node *head) 
{
 // your code goes here
 unordered_map<int,int>h;
 Node*temp=head;
 h[head->data]=1;
 while(temp->next!=NULL){
     if(h.find(temp->next->data)!=h.end()){
         temp->next=temp->next->next;
     }else{
         h[temp->next->data]=1;
         temp=temp->next;
     }
 }
 return head;
}
