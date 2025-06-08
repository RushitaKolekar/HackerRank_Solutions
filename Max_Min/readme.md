# Angry Children (Max-Min)

## Problem Link
[HackerRank Challenge - Angry Children](https://www.hackerrank.com/contests/mountblue-technologies/challenges/angry-children)

## Description
Given an array of integers and a number `k`, select `k` elements such that the difference between the maximum and minimum of the selected elements is minimized.

**Key Points:**
- Must choose exactly `k` elements from the array
- The selection should minimize (max - min) of the chosen elements
- Array may contain duplicate values

## Input Format
- First line: `n` (size of the array)
- Second line: `k` (number of elements to select)
- Next `n` lines: Elements of the array

## Output Format
The minimum possible unfairness (max - min of selected elements)

## Example
### Input
7
3
10
100
300
200
1000
20
30

### Output
20


### Explanation
Sorted array: [10, 20, 30, 100, 200, 300, 1000]  
Optimal selection of 3 elements: [10, 20, 30]  
Unfairness = 30 - 10 = 20


## Visualization
Sorted Array: [10, 20, 30, 100, 200, 300, 1000]
Window 1: [10, 20, 30] → 30-10=20
Window 2: [20, 30, 100] → 100-20=80
Window 3: [30, 100, 200] → 200-30=170
...
Minimum unfairness = 20
