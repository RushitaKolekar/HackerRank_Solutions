#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int luckBalance(int k, vector<vector<int>> contests) {
    priority_queue<int, vector<int>, greater<int>> min_heap;
    int total = 0;
    
    for (auto& contest : contests) {
        if (contest[1] == 1) {
            min_heap.push(contest[0]);
        }
        total += contest[0]; // Assume we lose all initially
    }
    
    // We need to win (important.size() - k) contests
    int win_count = min_heap.size() - k;
    for (int i = 0; i < win_count; i++) {
        total -= 2 * min_heap.top(); // Subtract twice (since we initially added)
        min_heap.pop();
    }
    
    return total;
}

// Time Complexity: O(n log n) due to the priority queue operations
// Space Complexity: O(n) for the priority queue