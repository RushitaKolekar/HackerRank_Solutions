int equalizeArray(vector<int> arr) {
    
   unordered_map<int,int> freq;
    
    for(int i:arr){
        freq[i]++;
    }
    
    int max_count=0;
    
    for(auto& pair:freq){
            max_count=max(max_count,pair.second);
    }
    
    return arr.size()-max_count;
}

// Time Complexity: O(n)
// Space Complexity: O(n)