cmake_minimum_required(VERSION 3.16)
project(DictionaryBenchmark)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set compiler flags for Linux/GCC
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(DictionaryBenchmark
    main.cpp
    Dictionary.hpp
    UnsortedVectorDict.cpp
    UnsortedVectorDict.hpp
    SortedVectorDict.cpp
    SortedVectorDict.hpp
    UnsortedLinkedListDict.cpp
    UnsortedLinkedListDict.hpp
    SortedLinkedListDict.cpp
    SortedLinkedListDict.hpp
)
