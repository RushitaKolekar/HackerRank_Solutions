#include <iostream>

using namespace std;

long sumXor(long n) {
    if (n == 0) return 1;  // Special case
    
    // Count number of unset bits
    int zero_bits = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            zero_bits++;
        }
        n >>= 1;
    }
    
    return 1L << zero_bits;  // 2^zero_bits
}

// Time Complexity: O(log n) since we are iterating through the bits of n
// Space Complexity: O(1) since we are using a constant amount of space

//2nd approach

long sumXor(long n) {
    long count = 1;  // Always count x=0
    
    while (n > 0) {
        if ((n & 1) == 0) {
            count <<= 1;  // Double count for each zero bit
        }
        n >>= 1;
    }
    
    return count;
}

// Time Complexity: O(log n) since we are iterating through the bits of n   
// Space Complexity: O(1) since we are using a constant amount of space