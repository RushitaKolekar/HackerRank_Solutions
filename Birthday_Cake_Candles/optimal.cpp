#include <vector>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int max_height = *max_element(candles.begin(), candles.end());
    return count(candles.begin(), candles.end(), max_height);
}

// Time Complexity: O(n)
// Space Complexity: O(1)