#include <vector>
#include <algorithm>

using namespace std;

int beautifulTriplets(int d, vector<int> arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (binary_search(arr.begin(), arr.end(), arr[i] + d) &&
            binary_search(arr.begin(), arr.end(), arr[i] + 2*d)) {
            count++;
        }
    }
    return count;
}

// Time Complexity: O(n log n) due to binary search
// Space Complexity: O(1) since we are not using any extra space apart from input array