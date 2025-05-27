// functional way to write the same code

#include <vector>
#include <numeric>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int minScore = scores[0], maxScore = scores[0];
    int minBreaks = 0, maxBreaks = 0;
    
    for (int score : scores) {
        maxBreaks += (score > maxScore);
        minBreaks += (score < minScore);
        maxScore = max(maxScore, score);
        minScore = min(minScore, score);
    }
    
    return {maxBreaks, minBreaks};
}

// Time Complexity: O(n)
// Space Complexity: O(1)