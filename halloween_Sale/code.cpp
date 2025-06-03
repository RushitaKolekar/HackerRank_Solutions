// 1st approach

int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    
    int count = 0;
    while(s>=p){
        s-=p;
        count++;
        p= max(p-d,m);
    }
    return count;
}

//Time Complexity - O(n)
//Space Complexity - O(1)

// 2nd approach

int howManyGames(int p, int d, int m, int s) {
    int count = 0;
    // Buy games while price is decreasing
    while (p > m && s >= p) {
        s -= p;
        count++;
        p -= d;
    }
    // Buy remaining games at price m
    if (s >= m) {
        count += s / m;
    }
    return count;
}

// Time Complexity - O(n)
// Space Complexity - O(1)

// 3rd approach

int howManyGames(int p, int d, int m, int s) {
    if (p > s) return 0;
    
    // Calculate number of games before price reaches m
    int n = (p - m) / d + 1;
    // Total cost for first n games
    int sum_n = n * (2 * p - (n - 1) * d) / 2;
    
    if (sum_n <= s) {
        // Can buy additional games at price m
        return n + (s - sum_n) / m;
    } else {
        // Binary search for maximum n where sum_n ≤ s
        int low = 0, high = n;
        while (low < high) {
            int mid = (low + high + 1) / 2;
            int sum_mid = mid * (2 * p - (mid - 1) * d) / 2;
            if (sum_mid <= s) low = mid;
            else high = mid - 1;
        }
        return low;
    }
}

// Time Complexity - O(log n)
// Space Complexity - O(1)