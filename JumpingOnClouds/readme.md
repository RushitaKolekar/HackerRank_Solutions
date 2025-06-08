# Jumping on the Clouds

## Problem Link
[HackerRank Challenge - Jumping on the Clouds](https://www.hackerrank.com/contests/mountblue-technologies/challenges/jumping-on-the-clouds)

## Description
A game where Emma must jump through clouds represented by an array:
- **0** = Safe cloud
- **1** = Thunder cloud (must avoid)
- Can jump **1 or 2 clouds** at a time
- Starts at cloud 0, ends at last cloud
- Find the **minimum number of jumps** required

## Input Format
- First line: `n` (number of clouds, 2 ≤ n ≤ 100)
- Second line: `n` space-separated binary integers (cloud types)

## Output Format
Minimum jumps needed to reach the last cloud

## Example
### Input
7
0 0 1 0 0 1 0

### Output
4

### Explanation
Optimal path (0-indexed):
1. Jump to cloud 1 (1 jump)
2. Jump to cloud 3 (2 jumps)
3. Jump to cloud 4 (1 jump)
4. Jump to cloud 6 (2 jumps)
Total jumps: 4


## Jump Sequence Visualization
Clouds: 0 0 1 0 0 1 0
Jumps: _/ _/
2 2
Total: 4 jumps