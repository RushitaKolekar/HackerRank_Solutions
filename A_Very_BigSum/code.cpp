#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

long aVeryBigSum(vector<long> ar) {
    return accumulate(ar.begin(), ar.end(), 0L); // 0L ensures long addition
}

// Time Complexity: O(n), where n is the number of elements in the array.
// Space Complexity: O(1), 