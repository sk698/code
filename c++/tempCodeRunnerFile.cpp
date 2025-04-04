#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
void InsertFunction(Node* &tail, int d){
    Node* temp = new Node();
    temp -> data = d;
    temp -> next = tail;
}

int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    first -> data = 10;
    second -> data = 20;
    third -> data = 30;
    Node* temp = first;
    first -> next = second;
    second -> next = third;
    third -> next = NULL;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}