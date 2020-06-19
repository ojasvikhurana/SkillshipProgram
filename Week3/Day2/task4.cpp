/*Given a linked list of size N. The task is to complete the function countNodesinLoop() that checks whether a given Linked List contains a loop or not and if the loop is present then return the count of nodes in a loop or else return 0.
*/

int countNodesinLoop(struct Node *head)
{
    Node*slow=head;
    Node* fast=head;
    while(fast->next!=NULL and fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            int count=1;
            slow=slow->next;
            while(slow!=fast){
                slow=slow->next;
                count++;
            }
            return count;
        }
    }
    return 0;
}
