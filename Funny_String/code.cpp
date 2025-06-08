#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string funnyString(string s) {
    string r = s;
    reverse(r.begin(), r.end());
    
    for (int i = 1; i < s.length(); i++) {
        int diff_s = abs(s[i] - s[i-1]);
        int diff_r = abs(r[i] - r[i-1]);
        
        if (diff_s != diff_r) {
            return "Not Funny";
        }
    }
    
    return "Funny";
}

// Time Complexity: O(n)
// Space Complexity: O(n) for the reversed string


//2nd approach 

string funnyString(string s) {
    int n = s.length();
    for (int i = 1; i < n; i++) {
        int front_diff = abs(s[i] - s[i-1]);
        int back_diff = abs(s[n-i] - s[n-i-1]);
        
        if (front_diff != back_diff) {
            return "Not Funny";
        }
    }
    return "Funny";
}

// Time Complexity: O(n)
// Space Complexity: O(1) since we are not using any extra space for the reversed string