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
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}
void printNode(Node* &tail){
    Node* temp = tail;
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
    // printNode(tail);
    InsertAtTail(tail,5);
    InsertAtTail(tail,8);
    InsertAtTail(tail,2);
    printNode(tail);

    return 0;

} 