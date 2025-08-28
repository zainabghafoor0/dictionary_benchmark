#include "SortedVectorDict.hpp"
#include <algorithm>

void SortedVectorDict::insert(int key) {
    data.push_back(key);  // bulk insert, don’t maintain order
}

bool SortedVectorDict::lookup(int key) const {
    // binary search (assumes sorted, so finalize() must be called first)
    return std::binary_search(data.begin(), data.end(), key);
}

void SortedVectorDict::remove(int key) {
    auto pos = std::lower_bound(data.begin(), data.end(), key);
    if (pos != data.end() && *pos == key) {
        data.erase(pos);
    }
}

void SortedVectorDict::finalize() {
    std::sort(data.begin(), data.end());
}
