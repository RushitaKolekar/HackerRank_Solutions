string angryProfessor(int k, vector<int> a) {
        
    int count=0;
    for(int std:a){
        if(std <= 0) count++;
    }
    
        if(count>=k) return "NO";
        else return "YES";

}

// Time Complexity: O(n), where n is the number of students.
// Space Complexity: O(1), as we are using a constant amount of space.