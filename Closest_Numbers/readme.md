# Closest Numbers

## Problem Link
[HackerRank Challenge - Closest Numbers](https://www.hackerrank.com/contests/mountblue-technologies/challenges/closest-numbers)

## Description
Given an array of integers, find all pairs of elements with the smallest absolute difference between them. Return these pairs in ascending order.

**Key Points:**
- Array may contain positive and negative integers
- Pairs should be ordered [a, b] where a ≤ b
- Multiple pairs may have the same minimal difference
- Return all such pairs sorted in ascending order

## Input Format
- First line: `n` (size of array)
- Second line: `n` space-separated integers (the array)

## Output Format
All pairs with minimal difference, space-separated in ascending order

## Example
### Input
4
5 4 3 2

### Output
2 3 3 4 4 5


### Explanation
Sorted array: [2, 3, 4, 5]  
Differences:  
3-2=1, 4-3=1, 5-4=1  
All adjacent pairs have difference 1  
Pairs: (2,3), (3,4), (4,5)

## Optimal Approach
1. **Sort the Array**:
   - Enables efficient adjacent element comparison
2. **Find Minimal Difference**:
   - First pass to calculate smallest difference
3. **Collect All Pairs**:
   - Second pass to gather all pairs with this difference