#include <iostream>
#include<cmath>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    
    int first=0,second=0;
    int n= arr.size();
    
    for(int i=0;i<n;i++){

    first+= arr[i][i];
    second+= arr[i][n-1-i];
    
    }
    
    return abs(first-second);

}

// Time Complexity: O(n^2) where N is the matrix size
// Space Complexity: O(1)