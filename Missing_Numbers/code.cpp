vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    unordered_map<int, int> freq;
    
    // Count frequencies in original array
    for (int num : arr) {
        freq[num]++;
    }
    
    // Decrement counts for numbers in brr
    for (int num : brr) {
        freq[num]--;
    }
    
    // Collect numbers with negative count (present in brr but not arr)
    vector<int> missing;
    for (auto& [num, count] : freq) {
        if (count < 0) {
            missing.push_back(num);
        }
    }
    
    sort(missing.begin(), missing.end());
    return missing;
}

// Time Complexity: O(n);
// Space Complexity: O(n);