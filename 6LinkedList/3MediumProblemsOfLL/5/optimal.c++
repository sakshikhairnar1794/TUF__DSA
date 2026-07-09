#include <bits/stdc++.h>
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

Node* startingNode(Node* head) {

    if (head == NULL || head->next == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    // Detect cycle
    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {

            // Move slow to head
            slow = head;

            // Move both one step at a time
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            return slow;   // Starting node of the loop
        }
    }

    return NULL;
}
int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Create loop (5 -> 3)
    head->next->next->next->next->next = head->next->next;

    Node* ans = startingNode(head);

    if (ans)
        cout << "Starting node of loop: " << ans->data << endl;
    else
        cout << "No loop present";

    return 0;
}