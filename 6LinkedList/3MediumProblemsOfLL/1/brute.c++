#include <iostream>
#include <stack>
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

// Reverse Linked List using Stack
Node* reverseUsingStack(Node* head) {

    if(head == NULL || head->next == NULL)
        return head;

    stack<int> st;

    Node* temp = head;

    // Push all node values into stack
    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    // Replace node values with stack values
    temp = head;
    while(temp != NULL){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

// Print Linked List
void printList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    head = reverseUsingStack(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}