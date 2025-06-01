int alternatingCharacters(string s) {
    
   int deletion=0;
    int n = s.length();
    
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) deletion++;
    }
    return deletion;

}

//Time Complexity: O(n)
//Space Complexity: O(1)