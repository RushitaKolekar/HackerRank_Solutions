int introTutorial(int V, vector<int> arr) {
    
    int n= arr.size();
    
    for(int i=0;i<n;i++){
        if(V == arr[i]) return i;
    }
    return -1;

}

//Time Complexity: O(n)
//Space Complexity: O(1)