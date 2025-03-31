#include<iostream>
using namespace std;


class LinkedListNode{
    public:
        int data;
        LinkedListNode* next;
    LinkedListNode(int data){
        this -> data = data;
        this -> next = NULL;
    }


};

void InsertAtHead(LinkedListNode* &tail,int d){
    // new node create
    LinkedListNode* temp = new LinkedListNode(d);
    temp -> next = tail;
    tail = temp;

}

void print(LinkedListNode* &tail){
    LinkedListNode* temp = tail;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    
}
int main(){
    LinkedListNode* node1 = new LinkedListNode(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    LinkedListNode* tail = node1;
    print(tail);
    InsertAtHead(tail,5);
    InsertAtHead(tail,8);
    print(tail);


    return 0;
}