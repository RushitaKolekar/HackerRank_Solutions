vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    
    sort(sticks.begin(),sticks.end(), greater<int>());
    int n = sticks.size();
    
    for(int i=0;i<n-2;i++){
     int a = sticks[i],
         b = sticks[i+1],
         c = sticks[i+2];
        
    if(b+c > a) return {c,b,a};
    }
    
    return {-1};
    

}


// Time Complexity: O(nlogn) due to sorting
// Space Complexity: O(1) 