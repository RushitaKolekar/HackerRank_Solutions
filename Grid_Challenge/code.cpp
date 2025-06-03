string gridChallenge(vector<string> grid) {
    int n = grid.size();
    
    // Sort each row
    for (auto& row : grid) {
        sort(row.begin(), row.end());
    }
    
    // Check columns with early termination
    for (int col = 0; col < n; col++) {
        char prev = grid[0][col];
        for (int row = 1; row < n; row++) {
            if (grid[row][col] < prev) return "NO";
            prev = grid[row][col];
        }
    }
    
    return "YES";
}

// Time Complexity: O(n^2 log n) for sorting each row and O(n^2) for checking columns
// Space Complexity: O(1) additional space, as we sort in place and use no extra data structures