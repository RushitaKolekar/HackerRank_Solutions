# Repeated String

## Problem Link
[HackerRank Challenge - Repeated String](https://www.hackerrank.com/contests/mountblue-technologies/challenges/repeated-string)

## Description
Given an infinite string created by repeating string `s` infinitely many times, count how many times the character 'a' appears in the first `n` characters of the infinite string.

**Key Points:**
- String `s` contains only lowercase English letters
- The infinite string is created by repeating `s` infinitely
- Only count 'a's in the first `n` characters
- Must handle very large `n` efficiently (up to 10¹²)

## Input Format
- First line: String `s` (1 ≤ |s| ≤ 100)
- Second line: Integer `n` (1 ≤ n ≤ 10¹²)

## Output Format
A single integer representing the count of 'a's

## Example
### Input 1
aba
10

### Output 1
7


### Input 2
a
1000000000000

### Output 2
1000000000000


## Optimal Approach
1. **Count 'a's in Original String**:
   - Calculate full repetitions: `full_reps = n // len(s)`
   - Calculate partial characters: `remainder = n % len(s)`
2. **Mathematical Calculation**:
   - Total 'a's = (count in s × full_reps) + count in s[0:remainder]

## Edge Cases
- String contains no 'a's → return 0
- Entire string is 'a' → return n
- n is smaller than s length → count directly
- Very large n (must avoid brute-force)

## Constraints
- 1 ≤ |s| ≤ 100
- 1 ≤ n ≤ 10¹²
