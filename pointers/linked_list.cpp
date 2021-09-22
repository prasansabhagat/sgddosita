#include <iostream>
using namespace std;
//linear data structures that stores a list, multiple blocks of memory linked to each other 
// size can be modified, non-contiguous memory, insertation and deletion at any point is easier
// NODE- data|next...

class node{
    public:
    int data;
    node* next;

    node (int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp = head;
    while(temp=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    cout<<endl;
}

//struct Node* head; // global variable can be accessed anywhere

int main()
{
    node* head = NULL; // empty list...the pointer variable points nowhere 
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    return 0;
}