string hackerrankInString(string s) {
    
    const string target = "hackerrank";
    int target_position = 0;
    int n = target.size();
    
    for(char c:s){
        if(c== target[target_position]) target_position++;
        
        if(target_position == n) return "YES";
    }
    
    return "NO";

}

// Time Complexity: O(n) where n is the length of the string s
// Space Complexity: O(1) as we are using constant space for variables