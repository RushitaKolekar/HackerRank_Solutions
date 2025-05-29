#include <vector>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int count = 0, sum = 0;
    int n=s.size();

    for (int i = 0; i < n; i++) {
        sum += s[i];
        if (i >= m - 1) {
            if (sum == d) count++;
            sum -= s[i - m + 1]; // Remove the oldest element
        }
    }
    return count;
}

// Time Complexity: O(n)
// Space Complexity: O(1)

// This solution uses a sliding window technique to maintain the sum of the current subarray of length m.