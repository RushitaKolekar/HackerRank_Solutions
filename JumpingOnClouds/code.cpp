#include <vector>

using namespace std;

int jumpingOnClouds(vector<int> c) {
    int jumps = 0;
    int position = 0;
    int n = c.size();
    
    while (position < n - 1) {
        // Prefer jumping 2 clouds if possible
        if (position + 2 < n && c[position + 2] == 0) {
            position += 2;
        } else {
            position += 1;
        }
        jumps++;
    }
    
    return jumps;
}

// Time Complexity: O(n)
// Space Complexity: O(1)


// 2nd approach

int jumpingOnClouds(vector<int> c) {
    int n = c.size();
    vector<int> dp(n, n); // Initialize with max possible jumps
    
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        if (c[i] == 1) continue;
        
        if (i - 1 >= 0 && c[i-1] == 0)
            dp[i] = min(dp[i], dp[i-1] + 1);
        if (i - 2 >= 0 && c[i-2] == 0)
            dp[i] = min(dp[i], dp[i-2] + 1);
    }
    
    return dp[n-1];
}