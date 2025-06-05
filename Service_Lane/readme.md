# Service Lane

## Problem Link
[HackerRank Challenge - Service Lane](https://www.hackerrank.com/contests/mountblue-technologies/challenges/service-lane)

## Description
Given a service lane of width segments and multiple entry/exit pairs, determine the minimum width segment for each vehicle passage to determine the largest possible vehicle type that can pass through.

**Vehicle Types:**
- 1: Bike (width ≥ 1)
- 2: Car (width ≥ 2)
- 3: Truck (width ≥ 3)

**Key Points:**
- Array represents consecutive width segments
- Queries specify entry/exit indices (inclusive)
- Must find minimum width in segment range for each query
- Return maximum allowed vehicle type for each query

## Input Format
1. First line: `n` (number of width segments), `t` (number of test cases)
2. Second line: `n` space-separated integers (width measurements)
3. Next `t` lines: `i` `j` (entry and exit indices)

## Output Format
For each test case, print the largest allowed vehicle type

## Example
### Input
8 5
2 3 1 2 3 2 3 3
0 3
4 6
6 7
3 5
0 7

### Output
1
2
3
2
1

### Explanation
- Query [0,3]: min(2,3,1,2) = 1 → Bike
- Query [4,6]: min(3,2,3) = 2 → Car
- Query [6,7]: min(3,3) = 3 → Truck
- Query [3,5]: min(2,3,2) = 2 → Car
- Query [0,7]: min(entire array) = 1 → Bike