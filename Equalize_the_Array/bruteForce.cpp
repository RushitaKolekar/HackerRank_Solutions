int equalizeArray(vector<int> arr) {
    
   int min_value= arr.size();
    
    for(int i: arr){
        int count=0;
        
        for(int j: arr){
          if(j!=i) count++;  
        }
        min_value= min(min_value,count);
    }
    return min_value;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)