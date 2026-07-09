#include<bits/stdc++.h>
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
}

// Utility function to check presence of intersection
node* intersectionPresent(node* head1, node* head2) {
    unordered_set<node*> st;  // Set to store visited nodes from the first list
    while (head1 != NULL) {
        st.insert(head1);  // Insert nodes of the first list into the set
        head1 = head1->next;
    }
    while (head2 != NULL) {
        if (st.find(head2) != st.end()) return head2;  // If node is found in set, it's the intersection point
        head2 = head2->next;
    }
    return NULL;  // Return NULL if no intersection is found
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
    node* head = NULL;
    insertNode(head, 1);
    insertNode(head, 3);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 4);
    node* head1 = head;
    head = head->next->next->next;
    
    node* headSec = NULL;
    insertNode(headSec, 3);
    node* head2 = headSec;
    headSec->next = head;  // Creating intersection
    
    // Printing the lists
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
