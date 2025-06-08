#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

string misereNim(vector<int> s) {
    int xor_sum = accumulate(s.begin(), s.end(), 0, bit_xor<int>());
    int total_stones = accumulate(s.begin(), s.end(), 0);
    int max_pile = *max_element(s.begin(), s.end());
    
    // Special case when all piles have exactly 1 stone
    if (max_pile == 1) {
        return (total_stones % 2 == 1) ? "Second" : "First";
    }
    
    // Normal Nim game logic applies with different winning condition
    return (xor_sum != 0) ? "First" : "Second";
}

// Time Complexity: O(n)
// Space Complexity: O(1)

// 2nd approach 

string misereNim(vector<int> piles) {
    const int xor_sum = accumulate(piles.begin(), piles.end(), 0, bit_xor<int>());
    const int total_stones = accumulate(piles.begin(), piles.end(), 0);
    const bool all_ones = all_of(piles.begin(), piles.end(), [](int x) { return x == 1; });
    
    if (all_ones) {
        return (total_stones % 2 == 1) ? "Second" : "First";
    }
    
    return (xor_sum != 0) ? "First" : "Second";
}
