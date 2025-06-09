bool isPalindrome(const string &s, int l, int r) {
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

int palindromeIndex(string s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            if (isPalindrome(s, left+1, right)) return left;
            if (isPalindrome(s, left, right-1)) return right;
            return -1;
        }
        left++;
        right--;
    }
    return -1;
}