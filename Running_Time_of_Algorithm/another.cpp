{
     
    int swaps=0;
    int n = arr.size();
    for(int i=1;i<n;i++){
        int key= arr[i];
        int j = i-1;
        
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
            swaps++;
        }
        
        arr[j+1]=key;
    }
    
    return swaps;
}

//Time Complexity: O(n^2)
// Space Complexity: O(1)