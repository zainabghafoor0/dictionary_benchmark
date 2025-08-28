#pragma once

// This class serves as a super class of ADTs that
// implement Dictionary operations.

class Dictionary {
public:
    virtual void insert(int) = 0;
    virtual bool lookup(int) const = 0;
    virtual void remove(int) = 0;
    virtual ~Dictionary() = default;
};