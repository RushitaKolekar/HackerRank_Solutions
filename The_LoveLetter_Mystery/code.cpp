// 1st approach

int theLoveLetterMystery(string s) {
    int operations = 0;
    int left = 0, right = s.length() - 1;
    
    while (left < right) {
        operations += abs(s[left] - s[right]);
        left++;
        right--;
    }
    
    return operations;
}

// Time Complexity - O(n)
// Space Complexity - O(1)

// 2nd approach 

int theLoveLetterMystery(string s) {
    int ops = 0;
    int n = s.length();
    
    for (int i = 0; i < n/2; i++) {
        ops += abs(s[i] - s[n-1-i]);
    }
    
    return ops;
}

// Time Complexity - O(n)
// Space Complexity - O(1)