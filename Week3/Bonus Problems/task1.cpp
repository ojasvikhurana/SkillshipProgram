/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
       int sum=0;
        int carry=0;
        while(l1!=NULL or l2!=NULL){
            int x=(l1==NULL)?0:l1->val;
            int y=(l2==NULL)?0:l2->val;
            sum=carry+x+y;
            temp->next=new ListNode(sum%10);
            carry=sum/10;
            temp=temp->next;
            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;
        }
        if(carry!=0){
            temp->next=new ListNode(carry);
        }
        return head->next;
        
    }