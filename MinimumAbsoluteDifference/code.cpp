#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {
    
    // Sort the array to make adjacent elements have smallest differences
    sort(arr.begin(), arr.end());
    
    int min_diff = INT_MAX;
    
    // Compare only adjacent elements after sorting
    for (int i = 0; i < arr.size() - 1; i++) {
        int current_diff = abs(arr[i] - arr[i + 1]);
        if (current_diff < min_diff) {
            min_diff = current_diff;  // Early exit if we find the smallest possible difference
            if (min_diff == 0) return 0;
        }
    }
    
    return min_diff;
}

// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1)