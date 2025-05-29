//  Game Theory Simulation (For Understanding)

#include <vector>
#include <algorithm>

using namespace std;

int towerBreakers(int n, int m) {
    if (m == 1) return 2;
    
    vector<int> towers(n, m);
    bool player1_turn = true;
    
    while (true) {
        auto max_tower = max_element(towers.begin(), towers.end());
        if (*max_tower == 1) break;
        
        // Optimal move: reduce tallest tower to 1
        *max_tower = 1;
        player1_turn = !player1_turn;
    }
    
    return player1_turn ? 2 : 1;
}

// Time Complexity: O(n)
// Space Complexity: O(n)