int countingValleys(int n, string path) {
    int altitude = 0, valleys = 0;
    
    for(char step : path) {
        if(step == 'U') {
            altitude++;
            // Count a valley when returning to sea level from below
            if(altitude == 0) {
                valleys++;
            }
        }
        else if(step == 'D') {
            altitude--;
        }
    }
    
    return valleys;
}

// Time Complexity: O(n)
// Space Complexity: O(1)