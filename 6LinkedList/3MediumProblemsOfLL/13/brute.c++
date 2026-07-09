#include<iostream>
using namespace std;

class node {
public:
    int num;
    node* next;
    node(int val) {
        num = val;
        next = NULL;
    }
};

// Utility function to insert node at the end of the linked list
void insertNode(node* &head, int val) {
    node* newNode = new node(val);
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

// Utility function to check presence of intersection
node* intersectionPresent(node* head1, node* head2) {
    while (head2 != NULL) {
        node* temp = head1;
        while (temp != NULL) {
            // If both nodes are the same (intersection point)
            if (temp == head2) return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    // Intersection is not present between the lists, return NULL
    return NULL;
}

// Utility function to print linked list
void printList(node* head) {
    while (head->next != NULL) {
        cout << head->num << "->";
        head = head->next;
    }
    cout << head->num << endl;
}

int main() {
    // Creation of both lists
    node* head = NULL;
    insertNode(head, 1);
    insertNode(head, 3);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 4);
    node* head1 = head;
    head = head->next->next->next;  // Intersection point
    node* headSec = NULL;
    insertNode(headSec, 3);
    node* head2 = headSec;
    headSec->next = head;  // Creating intersection
    
    // Printing of the lists
    cout << "List1: ";
    printList(head1);
    cout << "List2: ";
    printList(head2);
    
    // Checking if intersection is present
    node* answerNode = intersectionPresent(head1, head2);
    if (answerNode == NULL) 
        cout << "No intersection\n";
    else 
        cout << "The intersection point is " << answerNode->num << endl;
    
    return 0;
}
