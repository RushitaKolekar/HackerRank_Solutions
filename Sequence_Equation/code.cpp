#include <vector>
#include <unordered_map>

using namespace std;

vector<int> permutationEquation(vector<int> p) {
    unordered_map<int, int> val_to_index;
    vector<int> result;
    int n = p.size();
    
    // Create mapping of value to its 1-based index
    for (int i = 0; i < n; i++) {
        val_to_index[p[i]] = i + 1;
    }
    
    for (int x = 1; x <= n; x++) {
        int y1 = val_to_index[x];       // p(y1) = x
        int y = val_to_index[y1];       // p(y) = y1
        result.push_back(y);
    }
    
    return result;
}

// Time Complexity: O(n)
// Space Complexity: O(n)


// 2nd solution using mathematical approach

#include <vector>

using namespace std;

vector<int> permutationEquation(vector<int> p) {
    vector<int> result(p.size());
    vector<int> index_map(p.size() + 1); // 1-based
    
    // Create index map where index_map[value] = original index + 1
    for (int i = 0; i < p.size(); i++) {
        index_map[p[i]] = i + 1;
    }
    
    for (int x = 1; x <= p.size(); x++) {
        result[x-1] = index_map[index_map[x]];
    }
    
    return result;
}