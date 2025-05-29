// direct character manipulation

#include <string>
using namespace std;

string caesarCipher(string s, int k) {
    k %= 26; // Handle shifts larger than 26
    for (char &c : s) {
        if (isupper(c)) {
            c = 'A' + (c - 'A' + k) % 26;
        } else if (islower(c)) {
            c = 'a' + (c - 'a' + k) % 26;
        }
    }
    return s;
}

// Time Complexity: O(n), where n is the length of the string.
// Space Complexity: O(1), 