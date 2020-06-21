/*61. Rotate List
Given a linked list, rotate the list to the right by k places, where k is non-negative.*/

ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or k==0)return head;
        ListNode*temp=head;
        int count=0;
        ListNode* ln=NULL;
        while(temp!=NULL){
            temp=temp->next;
            count++;
            if(temp)ln=temp;
        }
       // cout<<count;
        int it=count-(k%count);
       // cout<<it;
        if(it==count)return head;
        temp=head;
        for(int i=1;i<it;i++)temp=temp->next;
        ListNode*newhead=temp->next;
        temp->next=NULL;
        ln->next=head;
        return newhead;
}