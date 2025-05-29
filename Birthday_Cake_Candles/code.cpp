int birthdayCakeCandles(vector<int> candles) {
    
    int count=0;
    int max=0;
    int n= candles.size();
        
    for(int i=0;i<n;i++){
        if(candles[i]>max){
            max=candles[i];
            count=1;
        }     
        else if(max==candles[i]) count++;
        
    }
    
    return count;

}

// Time Complexity: O(n)
// Space Complexity: O(1)