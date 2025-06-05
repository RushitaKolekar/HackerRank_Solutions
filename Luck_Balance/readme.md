# Luck Balance

## Problem Link
[HackerRank Challenge - Luck Balance](https://www.hackerrank.com/contests/mountblue-technologies/challenges/luck-balance)

## Description
Lena is preparing for a programming competition where:
- Each contest has a luck balance (`positive` = adds luck, `negative` = reduces luck)
- Contests are either `important` (1) or `unimportant` (0)
- She can lose at most `k` important contests
- Goal: Maximize her luck balance

**Key Rules:**
- Must lose all unimportant contests (adds luck)
- Can choose to lose up to `k` important contests (adds luck)
- Must win remaining important contests (subtracts luck)

## Input Format
1. First line: `n k` (number of contests, max important losses)
2. Next `n` lines: `luck[i] importance[i]` pairs

## Output Format
Maximum achievable luck balance

## Example
### Input
6 3
5 1
2 1
1 1
8 1
10 0
5 0

### Output
29

### Explanation
- Unimportant contests (must lose): +10 +5 = +15
- Important contests:
  - Lose 3 with highest luck: +5 +8 +2 = +15
  - Win 1 with least luck: -1
- Total: 15 + 15 - 1 = 29