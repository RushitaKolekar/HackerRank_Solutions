# Sherlock and Squares

## Problem Link
[HackerRank Challenge - Sherlock and Squares](https://www.hackerrank.com/contests/mountblue-technologies/challenges/sherlock-and-squares)

## Description
Given two integers `a` and `b`, count the number of square integers between them (inclusive). A square integer is an integer which is the square of another integer.

**Key Points:**
- Range is inclusive of both endpoints
- Must efficiently count squares in large ranges
- Avoid brute-force checking every number

## Input Format
- First line: `q` (number of test cases)
- Next `q` lines: Pairs of space-separated integers `a` and `b`

## Output Format
For each test case, print the count of square integers in the range on a new line.

## Example
### Input
2
3 9
17 24


### Output
2
0


### Explanation
1. Between 3 and 9, the square integers are 4 (2²) and 9 (3²) → 2 numbers
2. Between 17 and 24, there are no perfect squares → 0

## Constraints
- 1 ≤ q ≤ 100
- 1 ≤ a ≤ b ≤ 10⁹
