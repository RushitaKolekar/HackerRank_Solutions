#include<algorithm>
using namespace std;

int pageCount(int n, int p) {
    // Calculate turns from front
    int fromFront = p / 2;
    
    // Calculate turns from back
    int fromBack = (n / 2) - (p / 2);
    
    return min(fromFront, fromBack);
}

// Time Complexity: O(1)
// Space Complexity: O(1)