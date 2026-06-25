//find the middle of linkedlist by using slow and fast pointers where slow increases by 1 and fast increases by 2 
#include <iostream>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to find middle node
Node* middleNode(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;          // Move 1 step

        fast = fast->next->next;    // Move 2 steps
    }

    return slow;
}

// Print List
void printList(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    // Creating Linked List
    Node* head = new Node(1);

    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Linked List: ";
    printList(head);

    Node* middle = middleNode(head);

    cout << "Middle Node: " << middle->data << endl;

    return 0;
}