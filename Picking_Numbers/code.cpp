int pickingNumbers(vector<int> a) {
    
    sort(a.begin(),a.end());
    int n= a.size();
    int max_len=1;
    int left=0;
    
    for(int i=0;i<n;i++){
        while(a[i] - a[left] > 1) left++;
        
        max_len= max(max_len, i-left+1);
    }
    
    return max_len;

}

// Time Complexity: O(nlogn) due to sorting
// Space Complexity: O(1) 