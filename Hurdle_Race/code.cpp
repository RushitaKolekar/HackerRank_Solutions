#include<algorithm>
#include<vector>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    
    int max_val = *max_element(height.begin(),height.end());
    
    if(k<max_val) return max_val-k;
    else return 0;

}

// Time Complexity: O(n)
// Space Complexity: O(1)