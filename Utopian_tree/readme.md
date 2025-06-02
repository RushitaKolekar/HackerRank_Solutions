# Utopian Tree

## Problem Link
[HackerRank Challenge - Utopian Tree](https://www.hackerrank.com/contests/mountblue-technologies/challenges/utopian-tree)

## Description
The Utopian Tree goes through 2 growth cycles every year:
1. **Spring**: Doubles in height
2. **Summer**: Grows by 1 meter

Given an integer `n` representing the number of growth cycles, calculate the tree's final height. The tree starts at 1 meter tall.

**Key Points:**
- Each year has 2 seasons (spring + summer)
- Odd cycles (1, 3, 5...) are spring (doubling)
- Even cycles (2, 4, 6...) are summer (+1 meter)
- Initial height = 1 meter

## Input Format
- First line: `t` (number of test cases)
- Next `t` lines: Integer `n` (number of cycles)

## Output Format
For each test case, print the final height

## Example
### Input
3
0
1
4

### Output
1
2
7


### Explanation
- Cycle 0: No growth → height = 1
- Cycle 1: Spring (1×2) → height = 2
- Cycle 4: 
  Spring 1 (1×2)=2 → 
  Summer 2 (2+1)=3 → 
  Spring 3 (3×2)=6 → 
  Summer 4 (6+1)=7
  