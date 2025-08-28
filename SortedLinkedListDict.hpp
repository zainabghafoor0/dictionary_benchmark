#pragma once
#include "Dictionary.hpp"
#include <vector>

class SortedLinkedListDict : public Dictionary {
public:
    SortedLinkedListDict();
    ~SortedLinkedListDict() override;

    void insert(int key) override;
    bool lookup(int key) const override;
    void remove(int key) override;

    // Finalize: sort all inserted keys once
    void finalize();

private:
    struct Node {
        int data;
        Node* next;
        Node(int val, Node* nxt = nullptr) : data(val), next(nxt) {}
    };

    Node* head;

    // Helper to clear the list safely
    void clear();
};
