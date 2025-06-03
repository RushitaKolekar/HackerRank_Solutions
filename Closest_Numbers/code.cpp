
vector<int> closestNumbers(vector<int> arr) {
    
    sort(arr.begin(),arr.end());
    int n= arr.size();
    
    vector<int> result;
    
    int min_diff= arr[1]-arr[0];
    
    result.push_back(arr[0]);
    result.push_back(arr[1]);
    
    for(int i=2;i<n;i++){
        int diff= arr[i]-arr[i-1];
        if(diff<min_diff){
            min_diff=diff;
            result.clear();
            result.push_back(arr[i-1]);
            result.push_back(arr[i]);
        }
        else if(diff==min_diff){
            result.push_back(arr[i-1]);
            result.push_back(arr[i]);
        }
    }
    return result;

}

// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(n) for storing the result