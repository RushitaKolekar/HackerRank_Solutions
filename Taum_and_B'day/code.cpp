#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long taumBday(long b, long w, long bc, long wc, long z) {
    // Calculate all possible costs without overflow
    auto safeAdd = [](long a, long b) {
        return (a > LONG_MAX - b) ? LONG_MAX : a + b;
    };
    
    auto safeMul = [](long a, long b) {
        if (a > 0 && b > LONG_MAX / a) return LONG_MAX;
        return a * b;
    };
    
    // Strategy 1: Buy directly
    long cost1 = safeAdd(safeMul(b, bc), safeMul(w, wc));
    
    // Strategy 2: Buy black, convert to white
    long cost2 = safeAdd(safeMul(b, bc), safeMul(w, safeAdd(bc, z)));
    
    // Strategy 3: Buy white, convert to black
    long cost3 = safeAdd(safeMul(w, wc), safeMul(b, safeAdd(wc, z)));
    
    // Strategy 4: Buy all black and convert needed to white
    long cost4 = safeAdd(safeMul(safeAdd(b, w), bc), safeMul(w, z));
    
    // Strategy 5: Buy all white and convert needed to black
    long cost5 = safeAdd(safeMul(safeAdd(b, w), wc), safeMul(b, z));
    
    // Find the minimum cost
    return min({cost1, cost2, cost3, cost4, cost5});
}

// Time Complexity: O(1)
// Space Complexity: O(1)