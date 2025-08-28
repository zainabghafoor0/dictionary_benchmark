#pragma once
#include "Dictionary.hpp"

class UnsortedLinkedListDict : public Dictionary {
public:
    UnsortedLinkedListDict();
    ~UnsortedLinkedListDict();
    void insert(int) override;
    bool lookup(int) const override;
    void remove(int) override;
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;

};
