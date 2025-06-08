#include <string>
#include <algorithm>

using namespace std;

string appendAndDelete(string s, string t, int k) {
    int s_len = s.size();
    int t_len = t.size();
    int common_length = 0;
    int min_len = min(s_len, t_len);
    
    // Find the length of the common prefix
    while (common_length < min_len && s[common_length] == t[common_length]) {
        common_length++;
    }
    
    // Calculate required operations
    int required_ops = (s_len - common_length) + (t_len - common_length);
    
    // Check possible scenarios
    if (k >= s_len + t_len) {
        // Can delete entire s and build t from scratch
        return "Yes";
    } else if (required_ops <= k && (k - required_ops) % 2 == 0) {
        // Can perform required ops and have even number of extra operations
        return "Yes";
    } else {
        return "No";
    }
}

// Time Complexity: O(n), where n is the length of the shorter string (s or t).
// Space Complexity: O(1), no additional space used apart from input strings.