int towerBreakers(int n, int m) {
    // If towers are height 1, player 1 can't move and loses
    // If number of towers is even, player 2 can mirror moves
    // If odd, player 1 can force win
    return (m == 1 || n % 2 == 0) ? 2 : 1;
}

// Time Complexity: O(1)
// Space Complexity: O(1)