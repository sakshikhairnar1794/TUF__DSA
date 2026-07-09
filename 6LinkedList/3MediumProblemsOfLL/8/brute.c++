#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

// Brute Force
ListNode* oddEvenList(ListNode* head) {
    if (head == nullptr)
        return head;

    vector<int> arr;

    // Store odd position nodes
    ListNode* temp = head;
    while (temp != nullptr) {
        arr.push_back(temp->val);
        if (temp->next == nullptr)
            break;
        temp = temp->next->next;
    }

    // Store even position nodes
    temp = head->next;
    while (temp != nullptr) {
        arr.push_back(temp->val);
        if (temp->next == nullptr)
            break;
        temp = temp->next->next;
    }

    // Put values back
    temp = head;
    int i = 0;

    while (temp != nullptr) {
        temp->val = arr[i++];
        temp = temp->next;
    }

    return head;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    head = oddEvenList(head);

    cout << "After Rearranging: ";
    printList(head);

    return 0;
}