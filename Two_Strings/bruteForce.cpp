string twoStrings(string s1, string s2) {
    
    
    for(char c1:s1){
        for(char c2:s2){
            if(c1==c2) return "YES";
        }
    }
    return "NO";

}

// Time Complexity: O(n*m) where n is the length of s1 and m is the length of s2
// Space Complexity: O(1) since we are not using any extra space that grows with input size