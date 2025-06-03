string gamingArray(vector<int> arr) {
    int max_so_far = 0;
    int count = 0;
    
    for (int num : arr) {
        if (num > max_so_far) {
            max_so_far = num;
            count++;
        }
    }
    
    return (count % 2 == 1) ? "Lee" : "Bob";
}

// Time Complexity: O(n)
// Space Complexity: O(1)