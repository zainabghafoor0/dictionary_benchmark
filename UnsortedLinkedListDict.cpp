#include "UnsortedLinkedListDict.hpp"

// Constructor
UnsortedLinkedListDict::UnsortedLinkedListDict() : head(nullptr) {}

// Destructor
UnsortedLinkedListDict::~UnsortedLinkedListDict() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Insert
void UnsortedLinkedListDict::insert(int key) {
    // No uniqueness check needed unless required by spec
    Node* newNode = new Node{key, head};
    head = newNode;
}

// Lookup
bool UnsortedLinkedListDict::lookup(int key) const {
    Node* current = head;
    while (current) {
        if (current->data == key) {
            return true;
        }
        current = current->next;
    }
    return false;
}

// Remove
void UnsortedLinkedListDict::remove(int key) {
    if (!head) return;

    // If head node contains the key
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Search for the key in the rest of the list
    Node* current = head;
    while (current->next && current->next->data != key) {
        current = current->next;
    }

    // If key found, remove it
    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}
