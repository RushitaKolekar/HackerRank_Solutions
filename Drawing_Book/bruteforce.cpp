#include <algorithm>

int pageCount(int n, int p) {
    int fromFront = 0;
    int fromBack = 0;
    
    // Calculate turns from front
    int current = 1;
    while (current < p) {
        fromFront++;
        current += (p - current > 1) ? 2 : 1;
    }
    
    // Calculate turns from back
    current = (n % 2 == 0) ? n : n - 1;
    while (current > p) {
        fromBack++;
        current -= (current - p > 1) ? 2 : 1;
    }
    
    return std::min(fromFront, fromBack);
}

// Time Complexity: O(n)
// Space Complexity: O(1)