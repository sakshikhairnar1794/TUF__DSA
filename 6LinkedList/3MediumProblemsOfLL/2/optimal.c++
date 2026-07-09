#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// Reverse Linked List
Node* reversal(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* temp = head;
    Node* prev = NULL;
    Node* front = NULL;

    while (temp != NULL) {
        front = temp->next;   // Store next node
        temp->next = prev;    // Reverse link
        prev = temp;          // Move prev
        temp = front;         // Move temp
    }

    return prev;
}

// Print Linked List
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    head = reversal(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}