// iterative way

#include <vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    
    int minScore= scores[0], maxScore= scores[0];
    int minBreak=0,maxBreak=0;
    
    for(int score:scores){

    if(score>maxScore){
      maxScore=score;
        maxBreak++;
    
    }
    
    else if(score <minScore){
        minScore=score;
        minBreak++;
    }}
    
    return {maxBreak,minBreak};

}

// Time Complexity: O(n)
// Space Complexity: O(1)