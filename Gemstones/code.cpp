#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int gemstones(vector<string> rocks) {
    if (rocks.empty()) return 0;
    
    vector<int> common(26, INT_MAX); // Track min counts across all rocks
    
    for (const string& rock : rocks) {
        vector<int> current(26, 0);
        for (char c : rock) {
            current[c - 'a'] = 1; // Mark present characters
        }
        for (int i = 0; i < 26; i++) {
            common[i] = min(common[i], current[i]);
        }
    }
    
    return count(common.begin(), common.end(), 1);
}

// Time Complexity: O(n * m) where n is the number of rocks and m is the average length of each rock
// Space Complexity: O(1) since we use a fixed-size array for character counts

// 2nd Approach using bitmask

int gemstones(vector<string> rocks) {
    if (rocks.empty()) return 0;
    
    int common = ~0; // Start with all bits set
    
    for (const string& rock : rocks) {
        int mask = 0;
        for (char c : rock) {
            mask |= (1 << (c - 'a'));
        }
        common &= mask;
    }
    
    return __builtin_popcount(common);
}