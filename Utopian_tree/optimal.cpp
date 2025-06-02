int utopianTree(int n) {
    // Pattern: 2^(k+1) - 1 when n is odd, 2^(k+1) - 2 when n is even
    // Where k is number of complete growth seasons (n/2)
    int k = (n + 1) / 2;
    return (1 << (k + 1)) - 1 - (n % 2);
}

// Time Complexity: O(1)
// Space Complexity: O(1)

//2nd approach - Bitwise operations

int utopianTree(int n) {
    // For n cycles, height is (2 << (n/2 + n%2)) - 1 - (n%2)
    return (1 << ((n >> 1) + 1)) - 1 << (n & 1)) - (n & 1);
}

// Time Complexity: O(1)
// Space Complexity: O(1)