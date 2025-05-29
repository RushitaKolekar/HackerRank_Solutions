#include<algorithm>
#include<vector>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    
    sort(height.begin(),height.end());
    int max_val= height.back();
    
    return max(0,max_val-k);

}


// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1) 