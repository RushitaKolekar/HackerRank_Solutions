#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long total = accumulate(arr.begin(), arr.end(), 0LL);
    long min_sum = total - *max_element(arr.begin(), arr.end());
    long max_sum = total - *min_element(arr.begin(), arr.end());
    cout << min_sum << " " << max_sum;
}

// Time Complexity: O(n) => O(5) 
// Space Complexity: O(1)