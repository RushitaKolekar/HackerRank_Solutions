int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    
    unordered_set<char> specials = {'!','@','#','$','%','^','&','*','(',')','-','+'};
    
    bool hasUpper= false,
         hasLower= false,
         hasDigit= false,
         hasSpecial= false;
    
    for(char c: password){
        if(isupper(c)) hasUpper= true;
        else if(islower(c)) hasLower= true;
        else if(isdigit(c)) hasDigit= true;
        else if(specials.count(c)) hasSpecial= true;
    }
    
    int missing_value= !hasUpper + !hasLower + !hasDigit + !hasSpecial;
    int invalidLength= max(0,6-n);
    
    
    return max(invalidLength, missing_value);

}

// Time Complexity: O(n), where n is the length of the password.
// Space Complexity: O(1) 