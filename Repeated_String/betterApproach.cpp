#include <string>
using namespace std;

long repeatedString(string s, long n) {
    long count_in_s = count(s.begin(), s.end(), 'a');
    long full_repeats = n / s.length();
    long remainder = n % s.length();
    
    long total = full_repeats * count_in_s;
    total += count(s.begin(), s.begin() + remainder, 'a');
    
    return total;
}

// Time Complexity: O(m) where m is the length of string s
// Space Complexity: O(1) since we are using a constant amount of extra space