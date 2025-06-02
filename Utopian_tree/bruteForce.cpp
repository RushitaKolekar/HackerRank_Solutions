int utopianTree(int n) {
    
    int height=1;
    
    for(int i= height;i<=n;i++){
        if(i%2==1) height*=2;
        else height++;
    }
    return height;

}

// Time Complexity: O(n)
// Space Complexity: O(1)