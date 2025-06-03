string twoStrings(string s1, string s2) {
    bool freq[256] = {false};
    for (char c : s1) freq[c] = true;
    for (char c : s2) if (freq[c]) return "YES";
    return "NO";
}

// Time Complexity: O(n + m) where n is the length of s1 and m is the length of s2
// Space Complexity: O(1) since we are using a fixed-size array of size 256