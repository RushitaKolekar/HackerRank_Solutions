int saveThePrisoner(int n, int m, int s) {
    int current = s;
    while (m > 1) {
        current = (current % n) + 1;
        m--;
    }
    return current;
}

//Time Complexity: O(m)
//Space Complexity: O(1)


// 2nd approach 

int saveThePrisoner(int n, int m, int s) {
    // Adjust for 0-based then back to 1-based
    int result = (s + m - 1) % n;
    return result == 0 ? n : result;
}

//Time Complexity: O(1)
//Space Complexity: O(1)