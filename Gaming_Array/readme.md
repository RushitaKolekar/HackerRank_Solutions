# An Interesting Game

## Problem Link
[HackerRank Challenge - An Interesting Game](https://www.hackerrank.com/contests/mountblue-technologies/challenges/an-interesting-game-1)

## Description
Two players alternate turns in a game with an array of integers:
- Each turn, a player selects and removes the maximum element from the array
- All remaining elements equal to (max_element - 1) are also removed
- The player who removes the last element wins
- Determine the winner (Player 1 or Player 2) assuming optimal play

**Key Points:**
- Players alternate starting with Player 1
- Removal follows specific rules about max element and its neighbors
- Need to count "effective moves" to determine winner

## Input Format
1. First line: t (number of test cases)
2. For each test case:
   - First line: n (array size)
   - Second line: n space-separated integers (array elements)

## Output Format
For each test case, print "Player1" or "Player2"

## Example
### Input
2
3
1 2 3
4
1 2 2 3

### Output
Player2
Player1

### Explanation
**Case 1:**
- Turn 1 (P1): Remove 3 and 2 → array becomes [1]
- Turn 2 (P2): Remove 1 → P2 wins

**Case 2:**
- Turn 1 (P1): Remove 3 and both 2s → array becomes [1]
- Turn 2 (P2): Remove 1 → P1 wins (since P2 made the last move?)