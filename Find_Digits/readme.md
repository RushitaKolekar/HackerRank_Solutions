# Find Digits

## Problem Link
[HackerRank Challenge - Find Digits](https://www.hackerrank.com/contests/mountblue-technologies/challenges/find-digits)

## Description
Given an integer `n`, count how many of its digits evenly divide `n` (with remainder 0).

**Key Rules:**
- Each digit must be a divisor of the original number `n`
- Division by zero is not allowed (ignore any 0 digits)
- Digits are processed individually (not as a group)

## Input Format
- First line: `t` (number of test cases)
- Next `t` lines: Integer `n` for each case

## Output Format
For each test case, print the count of valid digits

## Example
### Input
2
12
1012

### Output
2
3

### Explanation
**Case 1: 12**
- Digits: 1, 2
- 12 ÷ 1 = 12 (valid)
- 12 ÷ 2 = 6 (valid)
- Count: 2

**Case 2: 1012**
- Digits: 1, 0, 1, 2
- 1012 ÷ 1 = 1012 (valid, counts twice)
- Ignore 0 (division by zero)
- 1012 ÷ 2 = 506 (valid)
- Count: 3

