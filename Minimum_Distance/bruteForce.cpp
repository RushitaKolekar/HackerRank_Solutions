int minimumDistances(vector<int> a) {
    
    int min_val=INT_MAX;
    int n=a.size();
    
    for(int i=0;i<n-1;i++){

    for(int j=i+1;j<n;j++){
      
      if(a[i]==a[j]) min_val= min(min_val,j-i);
    }}
    
    return (min_val == INT_MAX) ? -1 : min_val;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1)