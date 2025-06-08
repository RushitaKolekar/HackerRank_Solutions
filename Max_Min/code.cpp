#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int min_diff = INT_MAX;
    
    for (int i = 0; i <= arr.size() - k; i++) {
        int current_diff = arr[i + k - 1] - arr[i];
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }
    
    return min_diff;
}

// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1) if we ignore the input array storage