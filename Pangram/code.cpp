string pangrams(string s) {
    
    unordered_set<char> letters;
    
    for(char c:s){
        if(isalpha(c)){
            letters.insert(tolower(c));
            
        if(letters.size() == 26) return "pangram";
        }
    }
    
    return "not pangram";

}

// Time Complexity: O(n), where n is the length of the string.
// Space Complexity: O(1), since the set can only contain 26 letters at most.