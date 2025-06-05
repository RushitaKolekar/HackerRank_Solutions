#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int luckBalance(int k, vector<vector<int>> contests) {
    vector<int> important;
    int total = 0;
    
    // Separate important and unimportant contests
    for (auto& contest : contests) {
        if (contest[1] == 1) {
            important.push_back(contest[0]);
        } else {
            total += contest[0]; // Always lose unimportant
        }
    }
    
    // Try all combinations of k important contests to lose
    sort(important.rbegin(), important.rend());
    for (int i = 0; i < important.size(); i++) {
        if (i < k) {
            total += important[i]; // Lose
        } else {
            total -= important[i]; // Win
        }
    }
    
    return total;
}

// Time Complexity: O(n log n) due to sorting the important contests
// Space Complexity: O(n) for storing important contests