#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node* back;

    Node(string data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

class BrowserHistory {
private:
    Node* currentPage;

public:
    BrowserHistory(string homepage) {
        currentPage = new Node(homepage);
    }

    void visit(string url) {
        // Delete forward history
        if (currentPage->next != nullptr) {
            Node* temp = currentPage->next;
            while (temp != nullptr) {
                Node* front = temp->next;
                delete temp;
                temp = front;
            }
            currentPage->next = nullptr;
        }

        Node* newNode = new Node(url);
        currentPage->next = newNode;
        newNode->back = currentPage;
        currentPage = newNode;
    }

    string back(int steps) {
        while (steps) {
            if (currentPage->back)
                currentPage = currentPage->back;
            else
                break;
            steps--;
        }
        return currentPage->data;
    }

    string forward(int steps) {
        while (steps) {
            if (currentPage->next)
                currentPage = currentPage->next;
            else
                break;
            steps--;
        }
        return currentPage->data;
    }

    void displayCurrentPage() {
        cout << "Current Page: " << currentPage->data << endl;
    }
};

int main() {
    BrowserHistory browser("leetcode.com");

    browser.displayCurrentPage();

    browser.visit("google.com");
    browser.displayCurrentPage();

    browser.visit("facebook.com");
    browser.displayCurrentPage();

    browser.visit("youtube.com");
    browser.displayCurrentPage();

    cout << "\nBack 1: " << browser.back(1) << endl;
    cout << "Back 1: " << browser.back(1) << endl;
    cout << "Forward 1: " << browser.forward(1) << endl;

    browser.visit("linkedin.com");
    browser.displayCurrentPage();

    cout << "Forward 2: " << browser.forward(2) << endl;
    cout << "Back 2: " << browser.back(2) << endl;
    cout << "Back 7: " << browser.back(7) << endl;

    return 0;
}