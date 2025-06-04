#include <vector>

using namespace std;

int lonelyinteger(vector<int> a) {
    int result = 0;
    for (int num : a) {
        result ^= num;
    }
    return result;
}

// Time Complexity: O(n) - single pass through the array
// Space Complexity: O(1) - no extra space used