#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string isValid(string s) {
    if (s.empty()) return "YES";
    
    // Count character frequencies
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    
    // Count frequency of frequencies
    unordered_map<int, int> count_of_counts;
    for (auto& p : freq) count_of_counts[p.second]++;
    
    // If all characters have same frequency
    if (count_of_counts.size() == 1) return "YES";
    
    // If more than two different frequencies
    if (count_of_counts.size() > 2) return "NO";
    
    // Get the two frequencies and their counts
    auto it = count_of_counts.begin();
    int freq1 = it->first, count1 = it->second;
    it++;
    int freq2 = it->first, count2 = it->second;
    
    // Ensure freq1 is the smaller one
    if (freq1 > freq2) {
        swap(freq1, freq2);
        swap(count1, count2);
    }
    
    // Case 1: One character has frequency 1 and appears only once
    // (e.g., "aabbc" - remove 'c')
    if (freq1 == 1 && count1 == 1) return "YES";
    
    // Case 2: One character has frequency exactly one more than others
    // and appears only once (e.g., "aabbccc" - remove one 'c')
    if (freq2 == freq1 + 1 && count2 == 1) return "YES";
    
    return "NO";
}

// Time Complexity: O(n)
// Space Complexity: O(n)