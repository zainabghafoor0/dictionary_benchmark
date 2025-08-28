# Dictionary Benchmark

## Structure

- `src/`: Contains `Dictionary` interface and `UnsortedVectorDict` implementation.
- `.github/workflows/test.yml`: GitHub Actions CI setup.

## How It Works

1. UnsortedVectorDict.cpp is complete and the main function contains the necessary code to test it. 
2. The output provides the average run-time for the **insert** and **lookup** function. However, only the average run-time values for the unsorted vector variation is meaningful as the other variations have not been implemented yet.    
3. GitHub Actions runs 

## Run Locally

```bash
mkdir build && cd build
cmake ..
make
ctest --output-on-failure
```
