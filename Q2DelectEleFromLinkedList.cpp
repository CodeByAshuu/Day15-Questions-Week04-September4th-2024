#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteNode(Node*& head, int value) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == value) {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Value not found in the list." << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, value;

    cout << "Enter number of elements : ";
    cin >> n;

    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        insertNode(head, element);
    }

    cout << "value to be deleted: ";
    cin >> value;

    deleteNode(head, value);

    cout << "Updated linked list: ";
    displayList(head);

    return 0;
}
