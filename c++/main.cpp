#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

        Node(int d){
            data = d;
            next = NULL;
        }
};
void InsertAtHead(Node* &, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}
void printNode(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << " ";
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    printNode(tail);
    InsertAtTail(tail,5);
    printNode(tail);

    return 0;

} 