bool compareString(const string &a, const string &b){
       if(a.length() != b.length()){
           return a.length() < b.length();
       }
    return a < b;
    
}

vector<string> bigSorting(vector<string> unsorted) {
    
    sort(unsorted.begin(),unsorted.end(),compareString);
    return unsorted;
    

}

// Time Complexity: O(n log n) where n is the number of strings in the input vector.
// Space Complexity: O(1) if we consider the input vector as the only space used, otherwise O(n) for the output vector.