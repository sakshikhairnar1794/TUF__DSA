#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *InsertAtHead(Node *head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    return temp;
}

Node *insertAtLast(Node *head, int val)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *nn = new Node(val);
    temp->next = nn;
    return head;
}

Node *InsertAtK(Node *head, int el, int k)
{
    int cnt;
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(el);
        }
        else
        {
            cout << "In Empty LL you can only insert at head" << endl;
            return NULL;
        }
    }
    if (k == 1)
    {
        Node *temp = new Node(el);
        temp->next = head;
        return temp;
    }
    cnt = 1;
    Node *temp = head;
    while (temp != NULL && cnt < k - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL)
    {
        cout << "Position out of range" << endl;
        return head;
    }

    Node *x = new Node(el);
    x->next = temp->next;
    temp->next = x;

    return head;
}
Node *insertBeforeVal(Node *head, int el, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == val)
    {
        return new Node(el);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            Node *x = new Node(el);
            x->next = temp->next; // connect new node to old node
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
void traverseLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    vector<int> arr = {12, 3, 9, 11, 10, 8, 7};
    Node *head = convertArr2LL(arr);
    head = InsertAtHead(head, 1);
    head = insertAtLast(head, 15);
    head = insertBeforeVal(head, 34, 15);
    head = InsertAtK(head, 80, 5);
    head = InsertAtK(head, 8, 50);
    traverseLL(head);
}