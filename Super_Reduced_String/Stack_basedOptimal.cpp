#include <string>
#include <stack>
using namespace std;

string reducedString(string s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop(); // Remove adjacent duplicate
        } else {
            st.push(c);
        }
    }
    string result;
    while (!st.empty()) {
        result = st.top() + result; // Build string from stack
        st.pop();
    }
    return result.empty() ? "Empty String" : result;
}