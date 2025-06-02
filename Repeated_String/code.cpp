#include <string>
using namespace std;

long repeatedString(string s, long n) {
    string infinite;
    while (infinite.length() < n) {
        infinite += s;
    }
    infinite = infinite.substr(0, n);
    
    return count(infinite.begin(), infinite.end(), 'a');
}

// Time Complexity: O(n)
// Space Complexity: O(n)