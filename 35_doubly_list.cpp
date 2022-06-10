#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
    }
};

void printList(Node* &head){

    Node* temp = head;

    while(head!=NULL){
        cout<<temp->prev<<" "<<temp->data<<" "<<temp->next<<" | ";
        temp=temp->next;
    }

}
int main(){

    Node* node1 = new Node(11);
    Node* node2 = new Node(12);
    Node* node3 = new Node(13);
    Node* node4 = new Node(14);
    Node* node5 = new Node(15);


    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    printList(node1);
    cout<<endl; 
return 0;
}