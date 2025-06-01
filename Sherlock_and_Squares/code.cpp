int squares(int a, int b) {
    
    int x= ceil(sqrt(a));
    int y= floor(sqrt(b));
    if(y>=x) return y-x+1;
    else return 0;

}

// Time Complexity: O(1)
// Space Complexity: O(1)