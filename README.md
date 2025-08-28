# Dictionary Benchmark

**Name:** Zainab Ghafoor  
**ID:** 008259427  
**GitHub repository link:** [dictionary_benchmark](https://github.com/zainabghafoor0/dictionary_benchmark.git)  

---

## Collaboration & Sources
This work is my own.  

- The base `Dictionary` interface and `UnsortedVectorDict` example were provided.  
- I wrote the three new classes myself:  
  - `SortedVectorDict.cpp / .hpp`  
  - `UnsortedLinkedListDict.cpp / .hpp`  
  - `SortedLinkedListDict.cpp / .hpp`  

For debugging and improving my code, I used **ChatGPT**. It helped me by:  
- Explaining compiler errors,  
- Suggesting how to finalize sorted data structures (bulk sort once instead of inserting one by one),  
- Helping fix a destructor bug in `SortedLinkedListDict`.  

I did not copy code directly. I changed and tested everything myself until it worked.  

---

## Implementation Details
The program tests four dictionary implementations:  

1. **Unsorted Vector** – insert at end, linear search for lookup.  
2. **Sorted Vector** – bulk insert then sort once, binary search for lookup.  
3. **Unsorted Linked List** – insert at head, linear search for lookup.  
4. **Sorted Linked List** – bulk insert at head, then sort once, linear traversal for lookup.  

### Files I changed
- `SortedVectorDict.cpp/.hpp` → added `finalize()` function and made insert use push_back before sorting.  
- `SortedLinkedListDict.cpp/.hpp` → added `finalize()` function, added `clear()` helper, fixed destructor so list is deleted safely, changed insert to push at head first then rebuild sorted list in finalize.  
- `UnsortedLinkedListDict.cpp/.hpp` → wrote the full implementation of insert, lookup, and remove.  

The data structures used are simple arrays (`std::vector`) and singly linked lists (with `Node` struct).  

---

## Testing & Status
The program was compiled with:  
```bash
g++ -std=c++20 *.cpp -o a.out
./a.out
