#include <vector>

vector<int> gradingStudents(vector<int> grades) {
    vector<int> result;
    for (int grade : grades) {
        if (grade < 38) {
            result.push_back(grade);
            continue;
        }
        
        int remainder = grade % 5;
        if (remainder >= 3) {
            result.push_back(grade + (5 - remainder));
        } else {
            result.push_back(grade);
        }
    }
    return result;
}

// time complexity: O(n)
// space complexity: O(n)