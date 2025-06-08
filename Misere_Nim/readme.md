# Misère Nim

## Problem Link
[HackerRank Challenge - Misère Nim](https://www.hackerrank.com/contests/mountblue-technologies/challenges/misere-nim-1)

## Description
A variant of the classic Nim game where:
- Players alternate removing objects from heaps
- Last player to make a move **loses** (instead of wins)
- Determine which player wins assuming optimal play

**Key Differences from Standard Nim:**
1. Terminal condition: Taking the last object makes you lose
2. Winning strategy depends on heap sizes and count
3. Special case when all heaps have size 1

## Input Format
1. First line: `t` (number of test cases)
2. For each test case:
   - First line: `n` (number of heaps)
   - Second line: `n` space-separated integers (heap sizes)

## Output Format
"First" if the first player can force a win, "Second" otherwise

## Example
### Input 1
2
2
1 1
3
2 1 3

### Output 1
First
Second


### Explanation
**Case 1:**
- All heaps size 1 and count is even → First player wins by forcing last move
- Strategy: First takes one heap, Second takes the last (and loses)

**Case 2:**
- XOR of heap sizes (2^1^3 = 0) → Standard Nim would say Second wins
- But in Misère: 
  - First can take from heap 2 → [1,1,3]
  - Second forced to create losing position