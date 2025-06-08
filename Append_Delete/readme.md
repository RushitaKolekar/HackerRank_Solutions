# Append and Delete

## Problem Link
[HackerRank Challenge - Append and Delete](https://www.hackerrank.com/contests/mountblue-technologies/challenges/append-and-delete)

## Description
Determine if you can convert string `s` to string `t` using exactly `k` operations where:
- **Append**: Add a character to the end of `s`
- **Delete**: Remove the last character of `s`

**Key Rules:**
1. Both operations count as 1 step
2. Must use exactly `k` operations
3. Can perform operations on empty strings
4. Extra deletions on empty string still count

## Input Format
1. First line: String `s`
2. Second line: String `t`
3. Third line: Integer `k` (number of operations)

## Output Format
"YES" if possible, "NO" otherwise

## Example
### Input 1
hackerhappy
hackerrank
9

### Output 1
YES


### Input 2
aba
aba
7

### Explanation
**Case 1:**
1. Delete last 5 chars of "hackerhappy" → "hacker" (5 ops)
2. Append "rank" → "hackerrank" (4 ops)
Total: 5 + 4 = 9 ops

**Case 2:**
1. Delete entire "aba" → "" (3 ops)
2. Append "aba" → "aba" (3 ops)
3. Delete empty string 1 time → "" (1 op)
Total: 3 + 3 + 1 = 7 ops