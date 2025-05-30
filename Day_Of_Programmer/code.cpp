string dayOfProgrammer(int year) {

    //1st method
    
    if(year==1918) return "26.09.1918";
    
    bool isLeap=false;
    
    if(year<1918){
        isLeap = (year % 4 == 0);
    }
    else{
        isLeap = (year%400==0) || (year%4==0 && year%100!=0);
    }

        if(isLeap) return "12.09."+to_string(year);
        else return "13.09."+to_string(year);


    //2nd method

    return (year == 1918) ? "26.09.1918" : 
           ((year < 1918 && year % 4 == 0) || 
           (year > 1918 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))) ? 
           "12.09." + to_string(year) : "13.09." + to_string(year);
}




// Time Complexity: O(1)
// Space Complexity: O(1)