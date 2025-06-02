
int beautifulBinaryString(string b) {
    
    int changes = 0;
    int n= b.length();
    
    for(int i=0;i<n-2;i++){
      if(b[i]=='0' && b[i+1]=='1' && b[i+2]=='0'){
          changes++;
          b[i+2]=1;
          i+=2;
      }
    }
    
    return changes;

}

// Time Complexity: O(n)
// Space Complexity: O(1)


//2nd approach

int beautifulBinaryString(string b) {
    
    int changes = 0;
    int n= b.length();
    
    for(int i=0;i<n-2;){
      if(b[i]=='0' && b[i+1]=='1' && b[i+2]=='0'){
          changes++;
          i+=3;
      }
        else{
            i++;
        }
        
    }
    
    return changes;

}


// Time Complexity: O(n)
// Space Complexity: O(1)