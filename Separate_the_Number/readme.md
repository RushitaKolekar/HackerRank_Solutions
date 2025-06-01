# Separate the Numbers

## Problem Link
[HackerRank Challenge - Separate the Numbers](https://www.hackerrank.com/contests/mountblue-technologies/challenges/separate-the-numbers)

## Description
Given a numeric string `s`, determine if it can be split into a sequence of two or more positive integers where:
1. Each subsequent number is exactly 1 greater than the previous number
2. No leading zeros in any number
3. The entire string is used exactly once

If possible, return "YES" followed by the first number in the sequence. Otherwise return "NO".

**Key Points:**
- The string can be up to 32 characters long
- Must check all possible valid splits
- Leading zeros make a number invalid (e.g., "01", "02")

## Input Format
- First line: `q` (number of queries)
- Next `q` lines: String `s` to evaluate

## Output Format
For each query:
- If valid: Print "YES" followed by the first number (space separated)
- If invalid: Print "NO"

## Example
### Input
3
1234
91011
99100


### Output
YES 1
YES 9
YES 99


### Explanation
1. "1234" can be split into [1, 2, 3, 4]
2. "91011" can be split into [9, 10, 11]
3. "99100" can be split into [99, 100]

## Constraints
- 1 ≤ q ≤ 20
- 1 ≤ |s| ≤ 32 (length of each string)

## Approach
1. **Iterate Possible First Numbers**: Try first numbers of varying lengths (1 to half string length)
2. **Build Sequence**: For each candidate first number, build the expected sequence
3. **Validate**: Check if built sequence matches the string exactly
4. **Edge Handling**: Special cases for single-digit sequences and long numbers

## Edge Cases
- Single-digit strings (always "NO")
- Strings with leading zeros (immediate "NO")
- Very long numbers (32-digit sequences)
- Numbers crossing digit boundaries (e.g., 99→100)

## Complexity Analysis
- **Time Complexity**: O(n²) where n is string length
- **Space Complexity**: O(n) for building sequences
