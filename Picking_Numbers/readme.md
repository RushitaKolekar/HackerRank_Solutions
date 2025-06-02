# Picking Numbers

## Problem Link
[HackerRank Challenge - Picking Numbers](https://www.hackerrank.com/contests/mountblue-technologies/challenges/picking-numbers)

## Description
Given an array of integers, find the longest subarray where the absolute difference between any two elements is ≤ 1. Return the length of this subarray.

**Key Points:**
- Subarray elements must satisfy |a - b| ≤ 1 for all pairs
- The subarray doesn't need to be contiguous
- Only considers absolute difference of 0 or 1
- Should return the maximum such subarray length

## Input Format
- First line: `n` (size of array)
- Second line: `n` space-separated integers (array elements)

## Output Format
A single integer representing the longest subarray length

## Example
### Input
6
4 6 5 3 3 1


### Output
3


### Explanation
Possible valid subarrays:
- [3, 3, 4] (difference ≤ 1)
- [5, 6, 5] (difference ≤ 1)
- [3, 3] (difference = 0)
Longest has length 3