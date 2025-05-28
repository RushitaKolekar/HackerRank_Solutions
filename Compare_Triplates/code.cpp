#include <vector>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int aInc = 0, bInc = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) aInc++;
        else if (b[i] > a[i]) bInc++;
    }
    return {aInc, bInc};
}

// Time Complexity: O(1) - The function always iterates through a fixed number of elements (3).
// Space Complexity: O(1) 