#include <vector>
#include <climits>

using namespace std;

int migratoryBirds(vector<int> arr) {
    int max_count = 0;
    int result = INT_MAX;
    
    for (int i = 0; i < arr.size(); i++) {
        int current_count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == arr[i]) {
                current_count++;
            }
        }
        
        if (current_count > max_count) {
            max_count = current_count;
            result = arr[i];
        } 
        else if (current_count == max_count && arr[i] < result) {
            result = arr[i];
        }
    }
    
    return result;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1) - no additional space used that scales with input size