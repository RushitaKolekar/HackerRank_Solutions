#include <string>
using namespace std;

string reducedString(string s) {
    bool changed;
    do {
        changed = false;
        for (int i = 0; i < (int)s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                s.erase(i, 2); // Remove 2 adjacent chars
                changed = true;
                i--; // Re-check current index after removal
            }
        }
    } while (changed);
    return s.empty() ? "Empty String" : s;
}

// Time Complexity: O(n^2) in the worst case, where n is the length of the string.
// Space Complexity: O(1) for the string manipulation, but O(n) for the input string storage.