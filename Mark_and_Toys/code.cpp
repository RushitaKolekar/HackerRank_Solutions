
int maximumToys(vector<int> prices, int k) {
   
    sort(prices.begin(),prices.end());
    
    int count=0,sum=0;
    
    for(int price:prices){
        if(sum+price <=k){
            sum+=price;
            count++;
        }
        else break;
    }
    return count;

}

//Time Complexity: O(n log n) for sorting the prices, where n is the number of toys.
// Space Complexity: O(1) 