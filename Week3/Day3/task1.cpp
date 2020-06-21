/*Given a Linked List of integers, write a function to modify the linked list such that all even numbers appear before all the odd numbers in the modified linked list. Also, keep the order of even and odd numbers same.*/

#include <iostream>
using namespace std;
class Node{
public:
  int data;
  Node* next;
  Node(int d=0){
      this->data=d;
      this->next=NULL;
  }
};
Node* sep(Node*head){
    Node* e=head;
    while(e->next!=NULL)e=e->next;
    Node*temp1=e;
    while(head!=e and head->data%2!=0){
        temp1->next=head;
        head=head->next;
        temp1->next->next=NULL;
        temp1=temp1->next;
    }
    if(head==e){
        if(head->data%2==0)
            return head;
        else{
            temp1->next=head;
            head=head->next;
            temp1->next->next=NULL;
            return head;
        }
    }
    Node*temp2=head;
    while(temp2!=e){
         if(temp2->next!=NULL and temp2->next->data%2==0)
         temp2=temp2->next;
         else{
             Node* d=temp2->next;
             temp2->next=temp2->next->next;
             temp1->next=d;
             temp1->next->next=NULL;
             temp1=temp1->next;
         }
     }
     return head;
    
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    Node* head=new Node();
	    Node* h=head;
	    for(int i=0;i<n;i++){
	        int d;
	        cin>>d;
	        Node* temp=new Node(d);
	        h->next=temp;
	        h=h->next;
	    }
	    head=head->next;
	    head=sep(head);
	    while(head!=NULL){
	        cout<<head->data<<" ";
	        head=head->next;
	    }
	    cout<<"\n";
	}
	return 0;
}