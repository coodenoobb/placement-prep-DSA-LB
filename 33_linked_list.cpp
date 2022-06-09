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

int main(){ 

    Node* node1 = new Node(10);
    // Node* node2 = new Node(20);
    // Node* node3 = new Node(30);
    // Node* node4 = new Node(40);


    // node1->next=node2;
    // node2->next=node3;
    // node3->next=node4;
    // Node* node1 =new Node;

    // node1->data = 20;
    // node1->next =NULL;

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    printList(head);

    // cout<<endl;
    // insertAtHead(head,99);
    // printList(head);

    // cout<<endl;
    // insertAtHead(head,79);
    // printList(head);

    insertAtTail(tail,60);
    printList(head);


 

return 0;
}