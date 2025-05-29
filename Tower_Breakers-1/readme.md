# Tower Breakers

## 🏰 Problem Description
Two players alternate turns removing blocks from towers. Player 1 always moves first. On each turn, a player can remove any number of blocks (between 1 and the current height) from a single tower, provided the number removed divides evenly into the tower's current height. The player who cannot make a move loses.

### Game Rules:
- There are `n` towers, each of height `m`
- Players remove `y` blocks from a tower where `y` is a divisor of the tower's current height (and `y ≠ height`)
- Last player to make a move wins

## 🎯 Input/Output Format

### Input
- First line: `t` (number of test cases)
- Next `t` lines: Pairs of `n` (towers) and `m` (initial height)

### Output
- For each test case, output the winner (1 or 2)

## 📝 Example

**Input:**

2
2 2
1 4


**Output:**
2
1

**Explanation:**
**Case 1**:
- Tower heights: [2, 2]
- Player 1 must reduce a tower to height 1
- Player 2 then reduces the other tower to 1
- Player 1 has no moves left → Player 2 wins

**Case 2**:
- Single tower of height 4
- Player 1 can reduce it to 2 or 1 (optimal: reduce to 1)
- Player 2 has no moves → Player 1 wins
