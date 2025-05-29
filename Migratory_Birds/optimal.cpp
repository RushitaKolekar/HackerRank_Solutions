//using hashmap

#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

int migratoryBirds(vector<int> arr) {
    unordered_map<int, int> freq;
    int max_count = 0;
    int result = INT_MAX;
    
    for (int bird : arr) {
        freq[bird]++;
        
        if (freq[bird] > max_count) {
            max_count = freq[bird];
            result = bird;
        } 
        else if (freq[bird] == max_count && bird < result) {
            result = bird;
        }
    }
    
    return result;
}

// Time Complexity: O(n) - single pass through the array
// Space Complexity: O(k) - where k is the number of unique bird types, 