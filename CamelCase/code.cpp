#include <cctype>

using namespace std;

int camelcase(string s) {
    if (s.empty()) return 0;
    
    int count = 1; // First word always exists
    for (char c : s) {
        if (isupper(c)) {
            count++;
        }
    }
    return count;
}

// Time Complexity: O(n), where n is the length of the string.
// Space Complexity: O(1), 