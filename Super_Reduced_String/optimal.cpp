//2 pointer

#include <string>
using namespace std;

string reducedString(string s) {
    int i = 0; // Pointer for the "stack"
    for (int j = 0; j < s.size(); j++) {
        if (i > 0 && s[i - 1] == s[j]) {
            i--; // "Pop" from stack
        } else {
            s[i++] = s[j]; // "Push" to stack
        }
    }
    s.resize(i);
    return s.empty() ? "Empty String" : s;
}