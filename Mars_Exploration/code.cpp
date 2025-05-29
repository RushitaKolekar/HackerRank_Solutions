int marsExploration(string s) {
    
    int count=0;
    int n= s.size();
    
    for(int i=0;i<n;i++){
        
        char expected= (i%3==1) ? 'O':'S';
        if(s[i]!=expected) { 
            count++;
        }
        
    }
      
    return count;

}

// Time Complexity: O(n)
// Space Complexity: O(1)