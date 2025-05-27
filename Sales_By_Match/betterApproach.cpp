//sorting and linear traversal

#include <vector>
#include <algorithm>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(), ar.end());
    int pairs = 0;
    
    for (int i = 0; i < n - 1; i++) {
        if (ar[i] == ar[i + 1]) {
            pairs++;
            i++; // Skip the next sock to avoid overlapping pairs
        }
    }
    return pairs;
}


// Time Complexity: O(n log n)  [for loop = O(n) and sorting = O(n log n)]
// Space Complexity: O(1) 