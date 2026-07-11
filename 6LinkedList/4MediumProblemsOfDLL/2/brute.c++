#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int x) {
        data = x;
        next = NULL;
        back = NULL;
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
    newNode->back = temp;

    return head;
}

// Brute Force
vector<pair<int, int>> findPairs(Node* head, int k) {

    vector<pair<int, int>> ans;

    Node* temp1 = head;

    while (temp1 != NULL) {

        Node* temp2 = temp1->next;

        while (temp2 != NULL) {

            if (temp1->data + temp2->data == k) {
                ans.push_back({temp1->data, temp2->data});
            }

            temp2 = temp2->next;
        }

        temp1 = temp1->next;
    }

    return ans;
}

int main() {

    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 8);

    int target = 7;

    vector<pair<int, int>> ans = findPairs(head, target);

    cout << "Pairs are:\n";

    for (auto p : ans) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}