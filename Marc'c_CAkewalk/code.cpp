long marcsCakewalk(vector<int> calorie) {
    
    
    int n= calorie.size();
    long result=0;
    
    sort(calorie.begin(),calorie.end(),greater<>());  
    
    for(int i=0;i<n;i++){
      
        result+= calorie[i]* pow(2,i);
        
    }
    
    return result; 
    
}

// Time Complexity: O(n log n) due to sorting the calorie array.
// Space Complexity: O(1) as we are using a constant amount of extra space.