#include <string>
#include <iostream>

using namespace std;

void separateNumbers(string s) {
    int n = s.length();
    // Try all possible first number lengths (1 to n/2)
    for (int len = 1; len <= n/2; len++) {
        string first_str = s.substr(0, len);
        // Skip numbers with leading zeros unless it's "0"
        if (first_str[0] == '0' && first_str != "0") continue;
        
        long num = stol(first_str);
        string built = first_str;
        long next = num + 1;
        
        while (built.length() < n) {
            string next_str = to_string(next);
            if (s.substr(built.length(), next_str.length()) != next_str) break;
            built += next_str;
            next++;
        }
        
        if (built == s) {
            cout << "YES " << first_str << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

// Time Complexity: O(n^2) in the worst case, where n is the length of the string.
// Space Complexity: O(n) for the string manipulations.

// 2nd approach

void separateNumbers(string s) {
    int n = s.length();
    for (int len = 1; len <= n/2; len++) {
        string first_str = s.substr(0, len);
        if (first_str[0] == '0' && first_str != "0") continue;
        
        long num = stol(first_str);
        string built = first_str;
        bool valid = true;
        
        while (built.length() < n) {
            long next = num + 1;
            string next_str = to_string(next);
            if (built.length() + next_str.length() > n) {
                valid = false;
                break;
            }
            if (s.substr(built.length(), next_str.length()) != next_str) {
                valid = false;
                break;
            }
            built += next_str;
            num = next;
        }
        
        if (valid && built == s) {
            cout << "YES " << first_str << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

// Time Complexity: O(n^2) in the worst case, where n is the length of the string.
// Space Complexity: O(n) for the string manipulations.