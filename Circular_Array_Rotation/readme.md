# Circular Array Rotation

## Problem Link
[HackerRank Challenge - Circular Array Rotation](https://www.hackerrank.com/contests/mountblue-technologies/challenges/circular-array-rotation)

## Description
This problem involves performing circular rotations on an array and then answering queries about the element at a particular position after all rotations have been performed.

Given an array of integers, we need to:
1. Perform `k` right circular rotations (each rotation shifts each element one position to the right, with the last element moving to the first position)
2. After performing all rotations, answer `q` queries where each query asks for the value at a specific index in the rotated array

## Input Format
The input consists of:
1. Three space-separated integers:
   - `n`: The number of elements in the array
   - `k`: The number of right circular rotations to perform
   - `q`: The number of queries
2. The next `n` lines contain the elements of the array
3. The following `q` lines each contain an integer `m`, representing the index to query in the rotated array

## Output Format
For each query, print the value of the element at the queried index in the rotated array on a new line.

## Example
### Input
3 2 3
1
2
3
0
1
2


### Output
2
3
1


### Explanation
Initial array: [1, 2, 3]  
After 1st rotation: [3, 1, 2]  
After 2nd rotation: [2, 3, 1]  
Queries:
- Index 0: 2
- Index 1: 3
- Index 2: 1
