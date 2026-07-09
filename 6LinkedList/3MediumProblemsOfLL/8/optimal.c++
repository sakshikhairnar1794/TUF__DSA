#include <iostream>
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

// Optimal
ListNode* oddEvenList(ListNode* head) {

    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;

    while (even != nullptr && even->next != nullptr) {

        odd->next = even->next;
        odd = odd->next;

        even->next = even->next->next;
        even = even->next;
    }

    odd->next = evenHead;

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