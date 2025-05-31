#include <string>

using namespace std;

string gameOfStones(int n) {
    // The losing positions follow n ≡ 0 or 1 mod 7
    return (n % 7 == 0 || n % 7 == 1) ? "Second" : "First";
}



//2nd approach readable solution


string gameOfStones(int n) {
    // Special cases for small n values
    if (n == 0 || n == 1) return "Second"; // No moves possible
    if (n == 2 || n == 3 || n == 5) return "First"; // Can take all stones
    
    // General pattern for n ≥ 6
    return (n % 7 == 0 || n % 7 == 1) ? "Second" : "First";
}

// Time Complexity: O(1)
// Space Complexity: O(1)