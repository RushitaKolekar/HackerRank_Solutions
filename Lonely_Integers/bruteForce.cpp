#include <vector>

using namespace std;

int lonelyinteger(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (int j = 0; j < a.size(); j++) {
            if (i != j && a[i] == a[j]) {
                found = true;
                break;
            }
        }
        if (!found) return a[i];
    }
    return -1; // shouldn't reach here per problem statement
}

// Time Complexity: O(n^2)  
// Space Complexity: O(1) - no extra space used