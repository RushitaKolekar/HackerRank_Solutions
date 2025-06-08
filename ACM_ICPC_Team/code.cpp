#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> acmTeam(vector<string> topic) {
    int max_topics = 0;
    int team_count = 0;
    int n = topic.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int current = 0;
            // Count topics known by either team member
            for (int k = 0; k < topic[i].size(); k++) {
                if (topic[i][k] == '1' || topic[j][k] == '1') {
                    current++;
                }
            }
            
            if (current > max_topics) {
                max_topics = current;
                team_count = 1;
            } else if (current == max_topics) {
                team_count++;
            }
        }
    }
    
    return {max_topics, team_count};
}

// Time Complexity: O(n^2 * m), where n is the number of teams and m is the length of each topic string.
// Space Complexity: O(1), since we are using a constant amount of extra space.


// 2nd code snippet

#include <vector>
#include <string>
#include <algorithm>
#include <bitset>

vector<int> acmTeam(vector<string> topic) {
    vector<bitset<500>> people;
    for (const string& s : topic) {
        people.emplace_back(bitset<500>(s));
    }
    
    int max_topics = 0;
    int team_count = 0;
    
    for (int i = 0; i < people.size(); i++) {
        for (int j = i + 1; j < people.size(); j++) {
            bitset<500> combined = people[i] | people[j];
            int current = combined.count();
            
            if (current > max_topics) {
                max_topics = current;
                team_count = 1;
            } else if (current == max_topics) {
                team_count++;
            }
        }
    }
    
    return {max_topics, team_count};
}