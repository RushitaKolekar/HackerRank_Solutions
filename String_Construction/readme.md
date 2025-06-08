# String Construction

## Problem Link
[HackerRank Challenge - String Construction](https://www.hackerrank.com/contests/mountblue-technologies/challenges/string-construction)

## Description
Amanda needs to construct a target string `s` with the following operations:
1. **Append** any character to a new string `p` (costs $1)
2. **Copy** any substring of `p` and append it to `p` (costs $0)
- Goal: Construct `s` with minimum cost

**Key Insight:**
- Each unique character in `s` must be paid for once
- Duplicates can be copied for free

## Input Format
- First line: `n` (number of strings)
- Next `n` lines: Strings to construct

## Output Format
For each string, print the minimum construction cost

## Example
### Input
2
abcd
abab

### Output
4
2

### Explanation
1. "abcd": All characters unique → cost = 4 ($1 per character)
2. "abab":
   - Pay for 'a' and 'b' ($2)
   - Copy "ab" to complete → total cost = 2


## Cost Calculation
"abcd" → {'a','b','c','d'} → cost=4
"aabb" → {'a','b'} → cost=2