#include <iostream>
#include<cmath>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    
    int n= arr.size();
    int diff=0;
    
    for(int i=0;i<n;i++){

    diff+= arr[i][i] - arr[i][n-1-i];
    
    }
    
    return abs(diff);

}

// Time Complexity: O(n) Single pass
// Space Complexity: O(1)