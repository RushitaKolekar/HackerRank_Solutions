//1st approach 
int jumpingOnClouds(vector<int> c, int k) {
    int energy = 100;
    int n = c.size();
    int pos = 0;
    
    do {
        pos = (pos + k) % n;
        energy -= (c[pos] == 1) ? 3 : 1;
    } while (pos != 0);
    
    return energy;
}

//2nd approach -  mathematical calculation

int jumpingOnClouds(vector<int> c, int k) {
    int thunder = 0;
    int n = c.size();
    
    for (int i = 0; i < n; i += k) {
        if (c[i] == 1) thunder++;
    }
    
    return 100 - (n/k) - (2 * thunder);
}

//3rd approach - using optimized loop

int jumpingOnClouds(vector<int> c, int k) {
    int energy = 100;
    int n = c.size();
    int pos = k % n;
    
    energy -= (c[pos] == 1) ? 3 : 1;
    
    while (pos != 0) {
        pos = (pos + k) % n;
        energy -= (c[pos] == 1) ? 3 : 1;
    }
    
    return energy;
}

// Time Complexity: O(n/k)
// Space Complexity: O(1)