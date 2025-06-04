#include <vector>
#include <unordered_map>

using namespace std;

int lonelyinteger(vector<int> a) {
    unordered_map<int, int> freq;
    for (int num : a) {
        freq[num]++;
    }
    for (auto& pair : freq) {
        if (pair.second == 1) {
            return pair.first;
        }
    }
    return -1;
}

// Time Complexity: O(n)    
// Space Complexity: O(n)