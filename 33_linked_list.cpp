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
void insertAtHead(Node* &head, int d){

    // create new node
    Node* temp = new Node(d);  
    //point temp next to prev head
    temp->next = head;
    // make head point to temp's head
    head = temp;

}

void printList(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
    
}

int main(){ 

    Node* node1 = new Node(20);

    // Node* node1 =new Node;

    // node1->data = 20;
    // node1->next =NULL;

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    printList(head);

    cout<<endl;
    insertAtHead(head,30);
    printList(head);

 

return 0;
}