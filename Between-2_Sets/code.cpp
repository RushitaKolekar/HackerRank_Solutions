#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    // Find LCM of array a
    int lcm_a = a[0];
    for (int num : a) {
        lcm_a = lcm(lcm_a, num);
    }
    
    // Find GCD of array b
    int gcd_b = b[0];
    for (int num : b) {
        gcd_b = gcd(gcd_b, num);
    }
    
    // Count multiples of LCM that divide GCD
    int count = 0;
    for (int multiple = lcm_a; multiple <= gcd_b; multiple += lcm_a) {
        if (gcd_b % multiple == 0) {
            count++;
        }
    }
    return count;
}

// Time Complexity: O(n + m + k) where n,m are array sizes, k is range
// Space Complexity: O(1)