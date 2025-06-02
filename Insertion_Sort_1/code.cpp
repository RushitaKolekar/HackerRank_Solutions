
void insertionSort1(int n, vector<int> arr) {
    
    int last = arr[n-1];
    int i= n-2;
    
    while(i>=0 && arr[i]>last){
        arr[i+1]=arr[i];
        for(int num:arr){
            cout<<num<<" ";
        }
        cout<<endl;
        i--;
    }
    
    arr[i+1]=last;
    for(int num:arr) cout<<num<<" ";

}

// Time Complexity: O(n)
// Space Complexity: O(1)