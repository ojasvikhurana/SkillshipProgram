/*Given An array of Alphabets and their frequency. Your task is to print all the given alphabets Huffman Encoding.
Note: If two elements have same frequency, then the element which if at first will be taken on left of Binary Tree and other one to right.*/

#include <iostream>
#include<queue>
using namespace std;
class Node{
    public: 
    int data;
    char c;
    Node* left;
    Node* right;
    Node(int x,char y){
        data=x;
        c=y;
        left=NULL;
        right=NULL;
    }
};
void print(Node* root,string s){
    if(root==NULL)return;
    if(root->c!='#'){
        cout<<s<<" ";
        return;
    }
    print(root->left,s+'0');
    print(root->right,s+'1');
    return;
}
class comp{
    public:
    bool operator()(Node* t1,Node* t2){
        return(t1->data>t2->data);
       
    }
    
};
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int a[s.length()];
	    for(int i=0;i<s.length();i++)cin>>a[i];
	    priority_queue<Node*,vector<Node*>,comp>pq;
	    for(int i=0;i<s.length();i++){
	        Node* t = new Node(a[i],s[i]);
	        pq.push(t);
	    }
	    while(pq.size()>1){
	        Node* t1=pq.top();
	        pq.pop();
	        Node* t2=pq.top();
	        pq.pop();
	        Node* temp = new Node(t1->data+t2->data,'#');
	        temp->left=t1;
	        temp->right=t2;
	        pq.push(temp);
	    }
	    Node* root=pq.top();
	    print(root,"");
	    cout<<"\n";
	}
	return 0;
}