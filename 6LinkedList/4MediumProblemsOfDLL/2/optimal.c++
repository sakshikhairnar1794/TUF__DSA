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

// Optimal
vector<pair<int, int>> findPairs(Node* head, int k) {

    vector<pair<int, int>> ans;

    if (head == NULL)
        return ans;

    Node* left = head;
    Node* right = head;

    // Move right to last node
    while (right->next != NULL)
        right = right->next;

    while (left != right && right->next != left) {

        int sum = left->data + right->data;

        if (sum == k) {

            ans.push_back({left->data, right->data});

            left = left->next;
            right = right->back;
        }
        else if (sum < k) {

            left = left->next;
        }
        else {

            right = right->back;
        }
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