void separateNumbers(string s) {
    
    size_t n= s.length();
    
    
    for(size_t i=1;i<=n/2; i++){
        string first_str = s.substr(0,i);
        
        if(first_str[0] == '0' && first_str!= "0") continue;
        
        long num = stoll(first_str);
        size_t pos = i;
        bool valid = true;
        
        while(pos < n){
            long next = num+1;
            string next_str = to_string(next);
            if(pos + next_str.length() > n){
                valid = false;
                break;
            }
            if(s.substr(pos,next_str.length()) != next_str){
                valid = false;
                break;
            }
            
            pos+=next_str.length();
            num= next;
        }
        
        if(valid) {
            cout<<"YES "<<first_str<<endl;
                return;
        }
    }
    cout<<"NO"<<endl;

}

// Time Complexity: O(n^2) in the worst case, where n is the length of the string.
// Space Complexity: O(1)