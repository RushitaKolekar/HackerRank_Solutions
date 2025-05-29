// modulo counting

#include <vector>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    vector<int> freq(k, 0);
    int count = 0;
    for (int num : ar) {
        int rem = num % k; // Pairs where (rem + complement_rem) % k == 0
        count += freq[(k - rem) % k];
        freq[rem]++; // Update frequency
    }
    return count;
}

// Time Complexity: O(n)
// Space Complexity: O(k)