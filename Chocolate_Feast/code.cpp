#include <iostream>

using namespace std;

int chocolateFeast(int n, int c, int m) {
    int chocolates = n / c;
    int wrappers = chocolates;
    
    while (wrappers >= m) {
        int exchanged = wrappers / m;
        chocolates += exchanged;
        wrappers = wrappers % m + exchanged;
    }
    
    return chocolates;
}

// Time Complexity: O(log(n))  the number of iterations is proportional to the number of wrappers divided by m
// Space Complexity: O(1)


// mathematical approach

int chocolateFeast(int n, int c, int m) {
    int initial = n / c;
    if (m == 1) return INT_MAX; // Edge case - infinite chocolates
    return initial + (initial - 1) / (m - 1);
}