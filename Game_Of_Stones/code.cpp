string gameOfStones(int n) {
    
    if(n<2) return "Second";
    
    vector<bool> dp(n+1,false);
    
    for(int i=2;i<=n;i++){

    if(i>=2 && !dp[i-2]) dp[i]= true;
    if(i>=3 && !dp[i-3]) dp[i]=dp[i] || true;
    if(i>=5 && !dp[i-5]) dp[i]=dp[i] || true;
    }
    
    return dp[n] ? "First" : "Second";

}

//Time Complexity: O(n)
//Space Complexity: O(n)