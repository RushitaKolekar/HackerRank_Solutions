#include <iostream>
#include <iomanip>

void plusMinus(vector<int> arr) {
    
    int p=0,n=0,z=0;
    int size= arr.size();
    
    for(int nums:arr){
    
        p+= (nums>0);
        n+= (nums<0);
        z+= (nums==0);
    
    }
    
    cout<<fixed<<setprecision(6);
    cout<<(double)p/size<<endl;
    cout<<(double)n/size<<endl;
    cout<<(double)z/size<<endl;

}

//Time Complexity: O(n)
//Space Complexity: O(1)