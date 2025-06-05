#include <vector>
#include <algorithm>

using namespace std;

int luckBalance(int k, vector<vector<int>> contests) {
    int total = 0;
    vector<int> important;
    
    for (auto& contest : contests) {
        if (contest[1] == 1) {
            important.push_back(contest[0]);
        } else {
            total += contest[0];
        }
    }
    
    sort(important.begin(), important.end(), greater<int>());
    
    for (int i = 0; i < important.size(); i++) {
        total += (i < k) ? important[i] : -important[i];
    }
    
    return total;
}

// Time Complexity: O(n log n) due to sorting the important contests
// Space Complexity: O(n) for storing important contests