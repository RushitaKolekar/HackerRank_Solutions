# Grid Challenge

## Problem Link
[HackerRank Challenge - Grid Challenge](https://www.hackerrank.com/contests/mountblue-technologies/challenges/grid-challenge)

## Description
Given a square grid of lowercase English letters, determine if its rows can be rearranged such that every column is in non-decreasing alphabetical order.

**Key Points:**
- Each row can be rearranged (sorted) independently
- After rearrangement, columns must be sorted from top to bottom (a ≤ b ≤ c...)
- Return "YES" if possible, "NO" otherwise

## Input Format
- First line: `t` (number of test cases)
- For each test case:
  - First line: `n` (grid size)
  - Next `n` lines: Strings representing grid rows

## Output Format
For each test case, print "YES" or "NO"

## Example
### Input
1
3
abc
def
ade

### Output
NO

### Explanation
- After sorting rows: ["abc", "def", "ade"]
- Check columns:
  - Column 1: a, d, a → not sorted (a ≤ d but d ≰ a)
  - Hence, answer is "NO"
  

## Visualization
Original Grid:
a b c
d e f
a d e

Sorted Rows:
a b c
d e f
a d e

Column Check:
a ≤ d ≤ a? False (at column 1)