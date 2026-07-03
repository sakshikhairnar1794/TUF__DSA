#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node *convertArrToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *InsertBeforeHead(Node *head, int val)
{ // same as inserting before head

    Node *nn = new Node(val);
    if (head == NULL)
    {

        return nn;
    }
    nn->next = head;
    head->back = nn;

    return nn;
}

Node *InsertAfterHead(Node *head, int val)
{
    Node *nn = new Node(val);
    if (head == NULL)
    {

        return nn;
    }
    Node *front = head->next;
    head->next = nn;
    nn->back = head;
    if (front != NULL)
    {

        front->back = nn;
    }
    nn->next = front;

    return head;
}

Node *InsertAftertail(Node *head, int val)
{
    Node *nn = new Node(val);
    if (head == NULL)
    {
        return nn;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = nn;
    nn->back = temp;

    return head;
}

Node *InsertBeforeTail(Node *head, int val)
{
    Node *nn = new Node(val);
    if (head == NULL)
    {
        return nn;
    }

    if (head->next == NULL)
    {
        return InsertBeforeHead(head, val);
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *prev = temp->back;
    nn->next = temp;
    nn->back = prev;

    prev->next = nn;
    temp->back = nn;

    return head;
}

Node* InsertBeforeK(Node* head, int val, int k)
{
    if(head == NULL)
        return new Node(val);

    int cnt = 0;
    Node* temp = head;

    while(temp){
        cnt++;
        temp = temp->next;
    }

    if(k <= 0 || k > cnt)
        return head;

    if(k == 1)
        return InsertBeforeHead(head, val);

    if(k == cnt)
        return InsertBeforeTail(head, val);

    temp = head;
    int count = 1;

    while(count < k){
        temp = temp->next;
        count++;
    }

    Node* nn = new Node(val);
    Node* prev = temp->back;

    nn->next = temp;
    nn->back = prev;

    prev->next = nn;
    temp->back = nn;

    return head;
}

Node* InsertAfterK(Node* head, int val, int k)
{
    if(head == NULL)
        return new Node(val);

    int cnt = 0;
    Node* temp = head;

    while(temp){
        cnt++;
        temp = temp->next;
    }

    if(k <= 0 || k > cnt)
        return head;

    if(k == 1)
        return InsertAfterHead(head, val);

    if(k == cnt)
        return InsertAftertail(head, val);

    temp = head;
    int count = 1;

    while(count < k){
        temp = temp->next;
        count++;
    }

    Node* nn = new Node(val);
    Node* front = temp->next;

    nn->next = front;
    nn->back = temp;

    temp->next = nn;

    if(front != NULL)
        front->back = nn;

    return head;
}  

Node* InsertBeforeValue(Node* head, int val, int target){

    if(head == NULL){
        return new Node(val);
    }

    // Target is the head
    if(head->data == target){
        return InsertBeforeHead(head, val);
    }

    Node* temp = head;

    while(temp != NULL && temp->data != target){
        temp = temp->next;
    }

    // Target not found
    if(temp == NULL){
        return head;
    }

    Node* nn = new Node(val);
    Node* prev = temp->back;

    nn->next = temp;
    nn->back = prev;

    prev->next = nn;
    temp->back = nn;

    return head;
} 

Node* InsertAfterValue(Node* head, int val, int target){

    if(head == NULL){
        return new Node(val);
    }

    Node* temp = head;

    while(temp != NULL && temp->data != target){
        temp = temp->next;
    }

    // Target not found
    if(temp == NULL){
        return head;
    }

    // Target is the tail
    if(temp->next == NULL){
        return InsertAftertail(head, val);
    }

    Node* nn = new Node(val);
    Node* front = temp->next;

    nn->next = front;
    nn->back = temp;

    temp->next = nn;
    front->back = nn;

    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArrToDLL(arr);

    cout << "Original DLL: ";
    print(head);

    cout << "\n\nInsert Before Head (1): ";
    head = InsertBeforeHead(head, 1);
    print(head);

    cout << "\n\nInsert After Head (2): ";
    head = InsertAfterHead(head, 2);
    print(head);

    cout << "\n\nInsert Before Tail (3): ";
    head = InsertBeforeTail(head, 3);
    print(head);

    cout << "\n\nInsert After Tail (4): ";
    head = InsertAftertail(head, 4);
    print(head);

    cout << "\n\nInsert Before K (100 before 3rd node): ";
    head = InsertBeforeK(head, 100, 3);
    print(head);

    cout << "\n\nInsert After K (200 after 5th node): ";
    head = InsertAfterK(head, 200, 5);
    print(head);

    cout << "\n\nInsert Before Value (300 before 8): ";
    head = InsertBeforeValue(head, 300, 8);
    print(head);

    cout << "\n\nInsert After Value (400 after 5): ";
    head = InsertAfterValue(head, 400, 5);
    print(head);

    cout << endl;

    return 0;
}