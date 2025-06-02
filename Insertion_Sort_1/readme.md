# Insertion Sort - Part 1

## Problem Link
[HackerRank Challenge - Insertion Sort Part 1](https://www.hackerrank.com/contests/mountblue-technologies/challenges/insertionsort1)

## Description
Implement the first step of insertion sort for an array where:
- The last element is out of place
- Needs to be inserted into its correct position
- At each step, print the intermediate array state

**Key Points:**
- Array is nearly sorted except for the last element
- Shift elements right to make space for the target value
- Print array after each shift operation
- Final step should place the target value

## Input Format
- First line: `n` (size of array)
- Second line: `n` space-separated integers (the array)

## Output Format
Print each intermediate array state on a new line until sorted

## Example
### Input
5
2 4 6 8 3


### Output
2 4 6 8 8
2 4 6 6 8
2 4 4 6 8
2 3 4 6 8

### Explanation
1. 3 is target, 8 > 3 → shift 8 right
2. 6 > 3 → shift 6 right
3. 4 > 3 → shift 4 right
4. 2 < 3 → insert 3 in position 1
