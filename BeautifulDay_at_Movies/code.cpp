#include<algorithm>
#include<cmath>
using namespace std;

int reversed(int n){
    int reverse=0;
    
    while(n>0){
        reverse= reverse * 10 + n % 10;
        n=n/10;
    }
    return reverse;
}

int beautifulDays(int i, int j, int k) {
    
    int count=0;
    for(int n=i;n<=j;n++){
    int reverse= reversed(n)  ;
    int diff= abs(n-reverse);
    if(diff%k==0) count++;
    }
    
    return count;

}

// Time Complexity: O(n * log n) where n is the number of digits in the number.
// Space Complexity: O(1) as we are using a constant amount of space.