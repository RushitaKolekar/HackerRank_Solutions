{
      unordered_map<int,int>indices;
    int n = arr.size();
    
    for(int i=0;i<n;i++){
      indices[arr[i]]=i;
    }
    
    int count=0;
    
    for(int i=0;i<n;i++){
        int a = arr[i];
        if(indices.count (a+d) && indices.count(a+ 2*d)){
        count++; 
        }
    }
    return count;
}

// Time Complexity: O(n)
// Space Complexity: O(n)