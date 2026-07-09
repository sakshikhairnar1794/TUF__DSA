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

// Insert at end
Node* insert(Node* head, int data) {
    Node* newNode = new Node(data);

    if (head == NULL)
        return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Print Linked List
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Brute Force Sorting
Node* sortList(Node* head) {

    int count0 = 0, count1 = 0, count2 = 0;

    Node* temp = head;

    // Count 0s, 1s and 2s
    while (temp != NULL) {
        if (temp->data == 0)
            count0++;
        else if (temp->data == 1)
            count1++;
        else
            count2++;

        temp = temp->next;
    }

    temp = head;

    // Replace values
    while (temp != NULL) {

        if (count0 > 0) {
            temp->data = 0;
            count0--;
        }
        else if (count1 > 0) {
            temp->data = 1;
            count1--;
        }
        else {
            temp->data = 2;
            count2--;
        }

        temp = temp->next;
    }

    return head;
}

int main() {

    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 0);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 0);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 0);

    cout << "Original Linked List:\n";
    printList(head);

    head = sortList(head);

    cout << "Sorted Linked List:\n";
    printList(head);

    return 0;
}