int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {


    //1st method
    
    if(y1>y2) return 10000;
    if(y1<y2) return 0;
    
    if(m1>m2) return 500 * (m1-m2);
    if(m1<m2) return 0;
    
    if(d1>d2) return 15*(d1-d2);
    else return 0;


    //2nd method
    
    return (y1>y2) ? 10000 : 
           (y1<y2) ? 0 :
           (m1>m2) ? 500 *(m1-m2) :
           (m1<m2) ? 0 :
           (d1>d2) ? 15 *(d1-d2): 0;

}

// Time Complexity: O(1)
// Space Complexity: O(1)