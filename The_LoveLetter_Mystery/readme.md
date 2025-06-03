# The Love-Letter Mystery

## Problem Link
[HackerRank Challenge - The Love-Letter Mystery](https://www.hackerrank.com/contests/mountblue-technologies/challenges/the-love-letter-mystery)

## Description
Determine the minimum number of operations needed to convert a string into a palindrome, where each operation can reduce a character by 1 (e.g., 'd' → 'c'). Operations must be performed on the original string (cannot rearrange characters).

**Key Points:**
- Only decreasing operations allowed (a→z not allowed)
- Compare mirror characters in the string
- Calculate absolute difference in ASCII values
- Sum all required operations

## Input Format
- First line: `q` (number of queries)
- Next `q` lines: Strings to process

## Output Format
For each string, print the minimum operations needed

## Example
### Input
3
abc
abcba
abcd

### Output
2
0
4

### Explanation
1. "abc":
   - Compare 'a' vs 'c' → diff = 2
   - Total operations = 2
2. "abcba" is already a palindrome → 0
3. "abcd":
   - 'a' vs 'd' → diff = 3
   - 'b' vs 'c' → diff = 1
   - Total = 3 + 1 = 4