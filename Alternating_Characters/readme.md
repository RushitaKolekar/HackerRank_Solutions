# Alternating Characters

## Problem Link
[HackerRank Challenge - Alternating Characters](https://www.hackerrank.com/contests/mountblue-technologies/challenges/alternating-characters)

## Description
Given a string consisting of characters 'A' and 'B', determine the minimum number of deletions required to convert it into a string with alternating characters (no two identical characters adjacent).

**Key Points:**
- Only contains characters 'A' and 'B'
- Result must have alternating characters (ABAB... or BABA...)
- Return the minimum deletion count
- Empty string is considered valid

## Input Format
- First line: `q` (number of queries)
- Next `q` lines: Strings to process

## Output Format
For each string, print the minimum deletions required

## Example
### Input
5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB


### Output
3
4
0
0
4


### Explanation
1. "AAAA" → "A" (3 deletions)
2. "BBBBB" → "B" (4 deletions)
3. "ABABABAB" already alternates (0 deletions)
4. "BABABA" already alternates (0 deletions)
5. "AAABBB" → "ABAB" (4 deletions)

## Approach
1. **Single Pass Check**:
   - Compare each character with the next
   - Count consecutive duplicates
2. **Optimal Solution**:
   - No need to actually modify the string
   - Simply count adjacent duplicates

