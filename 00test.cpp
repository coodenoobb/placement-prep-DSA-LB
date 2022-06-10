#include<bits/stdc++.h>
using namespace std;
class Node {
	public:
		int data;
		Node* next;		
};
void printList(Node* &head){

	Node* temp =new Node();
	temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next; 
	}
}

void insertAtHead(Node* &head, int val){
	//create new node
	Node* temp =new Node();

	temp->data = val;
	temp->next=head;
	head= temp;
}

void insertAtTail(Node* &tail, int val){
	if(tail->next==NULL){
		Node* temp =new Node();
		tail->next=temp;
		temp->data=val;
		temp->next=NULL;

	}
}

void insertAtPosition(Node* &head, int pos, int val){
	int count = 1;
	Node* temp =new Node();
	while(count<pos){
		
	}
}

int main(){

	Node* first = new Node();
	Node* second = new Node();
	Node* third = new Node();

	first->data=11;
	first->next=second;

	second->data=22;
	second->next=third;

	third->data=33;
	third->next =NULL;

	printList(first);
	cout<<endl;

	cout<<third->data<<" "<<first->next<<endl;

	// insertAtHead(first,10);
	// printList(first);


	insertAtTail(first,63);
	printList(first);
	cout<<endl;
	// cout<<second->data<<" "<<second->next<<endl;


return 0;
}