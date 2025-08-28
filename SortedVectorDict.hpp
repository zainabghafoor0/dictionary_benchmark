#pragma once
#include "Dictionary.hpp"
#include <vector>

class SortedVectorDict : public Dictionary {
public:
    SortedVectorDict() = default;
    ~SortedVectorDict() override = default;

    void insert(int key) override;
    bool lookup(int key) const override;
    void remove(int key) override;

    // 🔑 New: finalize bulk inserts by sorting once
    void finalize();

private:
    std::vector<int> data;
};
