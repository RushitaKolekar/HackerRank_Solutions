#include <vector>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int count = 0;
    for (int i = 0; i <= s.size() - m; i++) {
        int sum = 0;
        for (int j = i; j < i + m; j++) {
            sum += s[j];
        }
        if (sum == d) count++;
    }
    return count;
}

//Time Complexity: O(n * m)
//Space Complexity: O(1)


