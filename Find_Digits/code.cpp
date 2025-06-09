int findDigits(int n) {
    string s = to_string(n);
    int count = 0;
    
    for (char c : s) {
        int digit = c - '0';
        if (digit != 0 && n % digit == 0) {
            count++;
        }
    }
    
    return count;
}

// Time Complexity: O(log n) - because we are iterating through the digits of n.
// Space Complexity: O(1) - we are using a constant amount of space for the count and the string representation.

#include <iostream>
#include <string>

using namespace std;

int findDigits(int n) {
    int count = 0;
    int original = n;  // Save original number
    
    while (n > 0) {
        int digit = n % 10;  // Extract last digit
        n /= 10;             // Remove last digit
        
        // Check if digit divides the original number
        if (digit != 0 && original % digit == 0) {
            count++;
        }
    }
    
    return count;
}

// Time Complexity: O(n) - because we are iterating through the digits of n.
// Space Complexity: O(1) - we are using a constant amount of space for the count and the original number.

