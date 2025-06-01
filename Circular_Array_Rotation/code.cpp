vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    
    int n= a.size();
    k%=n;
    vector<int> result;
    
    rotate(a.begin(),a.begin() + n-k,a.end());
    
    
    for(int i: queries){
         result.push_back(a[i]);
    }
   return result;
}

//Time Complexity: O(n + m) where n is the size of the array and m is the size of queries.
//Space Complexity: O(n) for storing the rotated array.