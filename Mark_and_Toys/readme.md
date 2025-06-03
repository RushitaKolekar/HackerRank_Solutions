# Mark and Toys

## Problem Link
[HackerRank Challenge - Mark and Toys](https://www.hackerrank.com/contests/mountblue-technologies/challenges/mark-and-toys)

## Description
Given an array of toy prices and a budget `k`, determine the maximum number of toys Mark can purchase without exceeding his budget.

**Key Points:**
- Must select toys within budget
- Can only buy each toy once
- Goal is to maximize quantity (not total value)
- Prices array may contain duplicates

## Input Format
- First line: Two space-separated integers `n` (number of toys) and `k` (budget)
- Second line: `n` space-separated integers (toy prices)

## Output Format
A single integer representing the maximum number of toys

## Example
### Input
7 50
1 12 5 111 200 1000 10

### Output
4


### Explanation
Sorted prices: [1, 5, 10, 12, 111, 200, 1000]  
Purchases: 1 + 5 + 10 + 12 = 28 (≤50)  
Total toys: 4

## Optimal Approach
1. **Sort Prices**:
   - Arrange prices in ascending order
2. **Greedy Selection**:
   - Iteratively add cheapest remaining toys until budget exhausted
3. **Count Toys**:
   - Maintain running sum and count
   - Stop when next toy would exceed budget

## Edge Cases
- All toys affordable → return `n`
- No toys affordable → return 0
- Multiple toys with same price
- Budget exactly matches sum of some toys

## Constraints
- 1 ≤ n ≤ 10⁵
- 1 ≤ k ≤ 10⁹
- 1 ≤ price[i] ≤ 10⁹


## Complexity Analysis
- **Time Complexity**: O(n log n) for sorting
- **Space Complexity**: O(1) additional space

