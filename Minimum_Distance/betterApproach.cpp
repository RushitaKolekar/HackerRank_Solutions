#include <vector>
#include <unordered_map>
#include <climits>
#include <algorithm>

using namespace std;

int minimumDistances(vector<int> a) {
    unordered_map<int, int> last_index;
    int min_dist = INT_MAX;
    
    for (int i = 0; i < a.size(); i++) {
        if (last_index.find(a[i]) != last_index.end()) {
            min_dist = min(min_dist, i - last_index[a[i]]);
        }
        last_index[a[i]] = i;
    }
    
    return (min_dist == INT_MAX) ? -1 : min_dist;
}

// Time Complexity: O(n)
// Space Complexity: O(n)