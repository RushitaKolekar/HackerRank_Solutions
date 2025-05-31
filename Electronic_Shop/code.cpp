int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    
    int max_Budget= 0;  
    
    for(int keyboard:keyboards){
        
        for(int usb:drives){
            
            int budget= keyboard+usb;
        
        if(budget>max_Budget  && budget <=b) max_Budget=budget;
        }
    }

    return max_Budget;
}

// Time Complexity: O(n*m) where n is the number of keyboards and m is the number of drives.
// Space Complexity: O(1) since we are using a constant amount of space for variables.