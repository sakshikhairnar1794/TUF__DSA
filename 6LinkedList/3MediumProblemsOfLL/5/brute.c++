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
    unordered_set<Node*> visited;

    Node* temp = head;

    while (temp != NULL) {
        if (visited.find(temp) != visited.end()) {
            return temp;   // Starting node of the loop
        }

        visited.insert(temp);
        temp = temp->next;
    }

    return NULL;   // No loop
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