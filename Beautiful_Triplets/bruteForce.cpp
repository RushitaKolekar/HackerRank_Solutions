int beautifulTriplets(int d, vector<int> arr) {
    
    int count=0;
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        for(int j = i+1; j<n;j++){
            if(arr[j]-arr[i] != d) continue;
            
            for(int k= j+1;k<n;k++){
                if(arr[k]-arr[j] == d) count++;
            }
        }
    }
    return count;

}

// Time Complexity: O(n^3)
// Space Complexity: O(1)