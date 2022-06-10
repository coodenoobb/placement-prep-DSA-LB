#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printList(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" "<<temp->next<<"      ";
        temp= temp->next;
    }
}

void deleteNode(Node* &head, int pos){

    //for 1st pos

    if(pos==1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    else{
        Node *curr = head;
        Node* prev = NULL;
        int count=1;
        while(count<pos){
            prev = curr;
            curr=curr->next;
            count++;
        }
        prev->next = curr->next;

        delete curr;



    }

}
int main(){ 

    Node* first = new Node(11);
    Node* second = new Node(22);
    Node* third = new Node(33);
    Node* fourth = new Node(44);

    first->next=second;
    second->next=third;
    third->next=fourth;

    printList(first);
    cout<<endl;
    deleteNode(first,1);
     printList(first);

return 0;
}