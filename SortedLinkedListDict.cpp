#include "SortedLinkedListDict.hpp"
#include <vector>
#include <algorithm>

SortedLinkedListDict::SortedLinkedListDict() : head(nullptr) {}

SortedLinkedListDict::~SortedLinkedListDict() {
    clear();
}

void SortedLinkedListDict::clear() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void SortedLinkedListDict::insert(int key) {
    // bulk insert: just prepend (unsorted)
    Node* newNode = new Node{key, head};
    head = newNode;
}

bool SortedLinkedListDict::lookup(int key) const {
    Node* current = head;
    while (current) {
        if (current->data == key) return true;
        if (current->data > key) break; // valid only after finalize()
        current = current->next;
    }
    return false;
}

void SortedLinkedListDict::remove(int key) {
    if (!head) return;

    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next && current->next->data < key) {
        current = current->next;
    }

    if (current->next && current->next->data == key) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

void SortedLinkedListDict::finalize() {
    // Extract all keys into a vector
    std::vector<int> keys;
    for (Node* curr = head; curr; curr = curr->next) {
        keys.push_back(curr->data);
    }
    std::sort(keys.begin(), keys.end());

    // Clear old unsorted list
    clear();

    // Rebuild sorted list
    Node* newHead = nullptr;
    Node* tail = nullptr;
    for (int k : keys) {
        Node* node = new Node{k, nullptr};
        if (!newHead) newHead = node;
        else tail->next = node;
        tail = node;
    }
    head = newHead;
}
