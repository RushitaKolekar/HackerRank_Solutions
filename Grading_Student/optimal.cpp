#include <vector>

vector<int> gradingStudents(vector<int>& grades) {
    for (int& grade : grades) {
        if (grade >= 38 && grade % 5 >= 3) {
            grade += (5 - (grade % 5));
        }
    }
    return grades;
}

// time complexity: O(n)
// space complexity: O(1) - in-place modification of the input vector