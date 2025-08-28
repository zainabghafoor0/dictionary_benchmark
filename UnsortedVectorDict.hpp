#pragma once
#include<vector>
#include "Dictionary.hpp"

// An implementation of an ADT that
// support Dictionary operations.

// We use an instance of std::vector for this purpose
// and make no attempt to sort the values.

class UnsortedVectorDict : public Dictionary {

    public:
        void insert(int) override;
        [[nodiscard]] bool lookup(int) const override;
        void remove(int) override;

private:
    std::vector<int> data;

   [[nodiscard]] std::size_t lookup_idx(int) const;
};