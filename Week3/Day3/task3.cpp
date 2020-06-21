/*Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.
Expected Time Complexity: O(N)
Expected Auxialliary Space Usage: O(1)  (ie, you should not use the recursive stack space as well)*/

bool isPalindrome(Node *head)
{
    //Your code here
    if(head==NULL)return true;
        Node* slow=head;
        Node* fast=head;
        Node* prev=NULL;
        while(fast!=NULL and fast->next!=NULL){
            Node* temp=slow->next;
            fast=fast->next->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        if(fast!=NULL)slow=slow->next;
        while(slow!=NULL and prev!=NULL){
            if(slow->data!=prev->data)
                return false;
            slow=slow->next;
            prev=prev->next;
        }
        return true;
}