#include <iostream>
#include <limits> // For std::numeric_limits

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int n) {
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}

void update(Node* head, int oldVal, int newVal) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == oldVal) {
            current->data = newVal;
            break; // Assuming unique values, stop after first update
        }
        current = current->next;
    }
}

void printLL(Node* h) {
    while (h != nullptr) {
        std::cout << h->data << " ";
        h = h->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* n = nullptr;
    insert(n, 60);
    insert(n, 40);
    insert(n, 20);
    std::cout << "Linked list contents: ";
    printLL(n);

    // Update value 40 to 50
    update(n, 40, 50);
    std::cout << "After updating 40 to 50: ";
    printLL(n);

    // Insert a new value 70
    insert(n, 70);
    std::cout << "After inserting 70: ";
    printLL(n);

    // Update value 60 to 80
    update(n, 60, 80);
    std::cout << "After updating 60 to 80: ";
    printLL(n);

    // Clean up memory (don't forget this!)
    while (n != nullptr) {
        Node* temp = n;
        n = n->next;
        delete temp;
    }

    return 0;
}
