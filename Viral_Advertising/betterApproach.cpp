int viralAdvertising(int n) {
    
    int shared=5, cumulative=0;
    
    for(int day=1;day<=n;day++){
        int liked= shared/2;
        cumulative+=liked;
        shared= liked*3;
    }
    
    return cumulative;

}

// Time Complexity: O(n), where n is the number of days.
// Space Complexity: O(1), as we are using a constant amount of space.



