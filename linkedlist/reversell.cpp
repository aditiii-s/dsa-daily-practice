#include <iostream>
using namespace std;
// node class
class Node
{
public:
    int data;

    Node *next;
    // constructor named same as class
    Node(int val)
    {
        data = val;//kyuki yha input mei tum value put kroge vo data bnaega 
        next = NULL;
    }
};
// REVERSE FUNCTION
Node* reverseList(Node* head){

Node*prev=NULL;
Node*curr=head;
while(curr!=NULL){
    Node*nextnode=curr->next;//save next address
    curr->next=prev;
    prev=curr;
    curr =nextnode;
}
return prev;
}
//PRINTING ALL THE NODE 
void printlist(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;}

    int main() {

    // Creating Linked List
    Node* head = new Node(1);

    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    printlist(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    printlist(head);

    return 0;
}
