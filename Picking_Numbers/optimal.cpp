{
      int n = *max_element(a.begin(),a.end());
    int max_len = 0;
    vector<int>freq(n+2,0);
    
    for(int i: a){
        freq[i]++;
    }
    
    for(int i=1;i<=n;i++){
        max_len = max(max_len, freq[i]+freq[i+1]);
    }
    return max_len;
}

// Time Complexity: O(n) since we are iterating through the array and the frequency array
// Space Complexity: O(n) for the frequency array