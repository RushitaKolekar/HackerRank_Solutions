# Minimum Distances

## Problem Link
[HackerRank Challenge - Minimum Distances](https://www.hackerrank.com/contests/mountblue-technologies/challenges/minimum-distances)

## Description
Given an array of integers, find the minimum distance between any two equal elements. The distance between two array elements `a[i]` and `a[j]` is the absolute difference of their indices `|i - j|`.

**Key Points:**
- Return the smallest distance found between matching pairs
- Return `-1` if no matching pairs exist
- Array may contain duplicate values
- Efficient solution required for large arrays (O(n) or O(n log n))

## Input Format
1. First line: `n` (size of the array)
2. Second line: `n` space-separated integers representing the array elements

## Output Format
A single integer representing the minimum distance found, or `-1` if no matching pairs exist.

## Example
### Input
6
7 1 3 4 1 7


### Output
3


### Explanation
- The first pair of 1s has distance |4 - 1| = 3
- The first pair of 7s has distance |5 - 0| = 5
- The minimum distance is 3

## Constraints
- 1 ≤ n ≤ 10³
- 1 ≤ a[i] ≤ 10⁵

## Approach
1. **Hash Map Tracking**: Store the last occurrence index of each value
2. **Distance Calculation**: For each element, compare with its last occurrence
3. **Minimum Update**: Keep track of the smallest distance found

## Edge Cases
- All elements are unique (should return -1)
- All elements are identical (distance between consecutive elements)
- Array with only two elements (either same or different)
- Multiple pairs with the same minimum distance


