#include <string>
using namespace std;

long repeatedString(string s, long n) {
    long count = 0;
    long len = s.length();
    
    // Count 'a's in full string
    for (char c : s) {
        if (c == 'a') count++;
    }
    
    long full_repeats = n / len;
    long total = full_repeats * count;
    
    // Count remaining 'a's
    long remainder = n % len;
    for (int i = 0; i < remainder; i++) {
        if (s[i] == 'a') total++;
    }
    
    return total;
}

// Time Complexity: O(m) where m is the length of string s
// Space Complexity: O(1) 