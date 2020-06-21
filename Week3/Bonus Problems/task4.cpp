/*25. Reverse Nodes in k-Group
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.*/

 ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(k==1 or head==NULL)return head;
        ListNode* temp=head;
        for(int i=1;i<k;i++){
            temp=temp->next;
            if(temp==NULL)return head;
        }
        ListNode*newhead=head;
        ListNode*prev=NULL;
        while(newhead!=temp){
            ListNode* n=newhead->next;
            newhead->next=prev;
            prev=newhead;
            newhead=n;
        }
        head->next=reverseKGroup(newhead->next,k);
        newhead->next=prev;
        return newhead;
    }