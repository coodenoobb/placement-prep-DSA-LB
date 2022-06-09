#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        // using constr
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
void printList(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
    
}
//                   Insertion at HEAD
void insertAtHead(Node* &head, int d){

    // create new node
    Node* temp = new Node(d);  
    //point temp next to prev head
    temp->next = head;
    // make head point to temp's head
    head = temp;

}
//                      Insretion at TAIL
void insertAtTail(Node* &tail, int d){  
    // create new node
    Node* temp = new Node(d);  

    if(tail->next==NULL){
        tail-> next=temp;
    tail=temp;
    temp->next=NULL;
    }
    while(tail->next!=NULL){
        tail=tail->next;
    }
}

void insertAtPosition( Node* &head,Node* &tail, int pos, int d){

    // if postion is 1st
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
    }
    // create a node for Data D

    Node* noddle = new Node(d);
    noddle->next=temp->next;
    temp->next=noddle;

}

int main(){ 

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);


    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    // Node* node1 =new Node;

    // node1->data = 20;
    // node1->next =NULL;

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node4;
    printList(head);

    // cout<<endl;
    // insertAtHead(head,99);
    // printList(head);

    // cout<<endl;
    // insertAtHead(head,79);
    // printList(head);

    // insertAtTail(tail,55);


    printList(head);

    cout<<endl;

    // insertAtPosition(head,tail,5,22);
    // printList(head);

    cout<<head->data<<" "<<endl;
    cout<<tail->data<<" "<<endl;


    insertAtPosition(head,tail,5,22);
    printList(head);

       cout<<head->data<<" "<<endl;
    cout<<tail->data<<" "<<endl;

return 0;
}