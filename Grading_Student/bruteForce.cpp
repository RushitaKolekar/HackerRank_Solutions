#include <vector>

vector<int> gradingStudents(vector<int> grades) {
    
    vector<int> result;
    
    for(int grade:grades){
        
        if(grade<38) result.push_back(grade);
        
        else{
            int changed= ((grade/5)+1)*5;
            if(changed-grade<3) result.push_back(changed);
            else result.push_back(grade);
        }
    }
    
    return result;

}

// time complexity: O(n)
// space complexity: O(n)