#include<bits/stdc++.h>
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

Node* DeletionFromHead(Node*head){
    if(head == NULL){
        return NULL;
    }

    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node * prev = head;
    head = head -> next;
    head -> back = NULL;
    prev -> next = NULL;
    delete prev;

    return head;

}
Node* DeletionFromTail(Node* head){
    if(head == NULL){
        return NULL;
    }

    // Only one node
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node*tail = head;
    while(tail->next!= NULL){
        tail = tail -> next;
    }
    Node* prev = tail -> back;
    prev -> next = NULL;
    tail -> back = NULL;
    delete tail;

    return head;
}

Node* DeletionAtK(Node*head, int k){
    int cnt = 0;
    Node*temp = head;
    while(temp){
        temp = temp -> next;
        cnt++;
    }
    if(k <= 0 || k > cnt){
    return head;
}
    if(k==1){
       return DeletionFromHead(head);
    }
    else if(k==cnt){
        return DeletionFromTail(head);
    }
    else{
        temp = head;
        int count = 1;
        while(temp){
            if(count == k)
            break;
            temp = temp -> next;
            count++;
        }
        Node*prev = temp -> back;
        Node* front = temp -> next;

        prev -> next = front;
        front -> back = prev;
        temp -> next = NULL;
        temp -> back = NULL;
        delete temp ;
        return head;

    }
}
Node* DeleteByValue(Node* head, int val){

    if(head == NULL){
        return NULL;
    }

    Node* temp = head;

    // Find the node with the given value
    while(temp != NULL && temp->data != val){
        temp = temp->next;
    }

    // Value not found
    if(temp == NULL){
        return head;
    }

    // Delete head
    if(temp == head){
        return DeletionFromHead(head);
    }

    // Delete tail
    if(temp->next == NULL){
        return DeletionFromTail(head);
    }

    // Delete middle node
    Node* prev = temp->back;
    Node* front = temp->next;

    prev->next = front;
    front->back = prev;

    temp->next = NULL;
    temp->back = NULL;

    delete temp;

    return head;
}


int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertArrToDLL(arr);
    head = DeletionFromHead(head);
    head = DeletionFromTail(head);
    head = DeletionAtK(head, 3);
    print(head);
    return 0;
}