# Jumping on the Clouds: Revisited

## Problem Link
[HackerRank Challenge - Jumping on the Clouds: Revisited](https://www.hackerrank.com/contests/mountblue-technologies/challenges/jumping-on-the-clouds-revisited)

## Description
A character jumps through circular array of clouds (0=cumulus, 1=thunderhead) with these rules:
- Starts at cloud 0 with 100 energy
- Each jump of size `k` costs 1 energy
- Landing on thunderhead (1) costs additional 2 energy
- Game ends when returning to cloud 0
- Calculate remaining energy after completion

**Key Points:**
- Array is circular (wraps around using modulo)
- Fixed jump size `k`
- Energy deduction depends on cloud type
- Must calculate final energy after full cycle

## Input Format
- First line: `n k` (number of clouds, jump distance)
- Second line: `n` space-separated integers (cloud types)

## Output Format
Single integer representing remaining energy

## Example
### Input

n=8, k=2
0 0 1 0 0 1 1 0

### Output
92

### Explanation
Jump sequence: 0 → 2 → 4 → 6 → 0  
Energy changes:
1. Start: 100
2. Jump to 2 (thunderhead): 100-1-2=97
3. Jump to 4 (cumulus): 97-1=96
4. Jump to 6 (thunderhead): 96-1-2=93
5. Jump to 0 (cumulus): 93-1=92