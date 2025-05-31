# Game of Stones

## 🎮 Problem Description
Two players alternate turns removing stones from a pile. On each turn, a player can remove:
- 2, 3, or 5 stones
The player who removes the last stone wins. Given the initial stone count, determine if the first player can force a win (assuming both play optimally).

### Key Rules:
- Players always make optimal moves
- Cannot make an invalid move (can't take more stones than available)
- First player to be unable to move loses

## 🎯 Input/Output Format

### Input
- First line: `t` (number of test cases)
- Next `t` lines: `n` (initial stones, 1 ≤ n ≤ 100)

### Output
- For each test case: "First" or "Second" (winner)

## 📝 Example

**Input:**

8
1
2
3
4
5
6
7
10


**Output:**
Second
First
First
First
First
First
Second
First

**Explanation:**
- n=1: No valid move → First player loses → "Second"
- n=2: Take 2 → win → "First"
- n=7: 
  - Optimal play forces First player to lose:
    - First takes 2 (leaves 5) → Second takes 5 → wins
    - First takes 3 (leaves 4) → Second takes 3 → leaves 1 → First loses
    - First takes 5 (leaves 2) → Second takes 2 → wins