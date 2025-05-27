// using hashmap

#include <vector>
#include <unordered_map>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> colorCount;
    int pairs = 0;
    
    for (int sock : ar) {
        colorCount[sock]++;
    }
    
    for (auto& entry : colorCount) {
        pairs += entry.second / 2;
    }
    
    return pairs;
}


// Time Complexity: O(n)  [for loop = O(n) and hashmap operations = O(1)]
// Space Complexity: O(n)  [for storing sock counts in hashmap]
// This approach is efficient for large inputs and avoids the overhead of sorting or nested loops.