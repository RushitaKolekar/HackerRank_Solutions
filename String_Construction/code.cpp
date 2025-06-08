#include <string>
#include <unordered_set>

using namespace std;

int stringConstruction(string s) {
    unordered_set<char> unique_chars;
    for (char c : s) {
        unique_chars.insert(c);
    }
    return unique_chars.size();
}

// Time Complexity: O(n), where n is the length of the string s.
// Space Complexity: O(1), since the maximum number of unique characters is limited to 26 (lowercase English letters).

// 2nd approach using Bitmask

int stringConstruction(string s) {
    int seen = 0; // Bitmask to track seen characters
    int count = 0;
    
    for (char c : s) {
        int mask = 1 << (c - 'a');
        if (!(seen & mask)) {
            count++;
            seen |= mask;
        }
    }
    
    return count;
}