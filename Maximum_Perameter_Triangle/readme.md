
# Maximum Perimeter Triangle

## Problem Link
[HackerRank Challenge - Maximum Perimeter Triangle](https://www.hackerrank.com/contests/mountblue-technologies/challenges/maximum-perimeter-triangle)

## Description
Given an array of stick lengths, determine the three sticks that form a non-degenerate triangle with:
1. The maximum perimeter possible
2. The longest maximum side (if multiple solutions exist)
3. The longest minimum side (if still multiple solutions exist)

If no triangle can be formed, return `[-1]`.

**Key Points:**
- Non-degenerate triangle must satisfy a + b > c (for sides a ≤ b ≤ c)
- Must find the optimal valid combination
- Array may contain duplicates

## Input Format
- First line: `n` (number of sticks)
- Second line: `n` space-separated integers (stick lengths)

## Output Format
- Three space-separated integers representing the sides in non-decreasing order
- Or `-1` if no valid triangle exists

## Example
### Input 1

5
1 1 1 3 3

### Output 1
1 3 3


### Input 2
3
1 2 3

### Output 2
-1