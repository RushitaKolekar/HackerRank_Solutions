# Intro to Tutorial Challenges

## Problem Link
[HackerRank Challenge - Intro to Tutorial Challenges](https://www.hackerrank.com/contests/mountblue-technologies/challenges/tutorial-intro)

## Description
Given a sorted array of integers and a target value, implement a binary search to find:
- The index of the target value in the array
- Return -1 if the target is not found

**Key Points:**
- Array is sorted in ascending order
- Must use binary search (O(log n) time)
- Return the first occurrence if duplicates exist
- Array may contain negative numbers

## Input Format
1. First line: Target value `V` to search for
2. Second line: Integer `n` (size of array)
3. Third line: `n` space-separated integers (the sorted array)

## Output Format
A single integer representing the index of `V` or -1 if not found

## Example
### Input
4
6
1 2 3 4 4 6


### Output
3

### Explanation
- Target value 4 first appears at index 3 (0-based)
- Binary search checks middle values to narrow down position