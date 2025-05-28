# Bon Appétit Problem Solution

[![Problem Link](https://img.shields.io/badge/HackerRank-Problem%20Link-blue)](https://www.hackerrank.com/contests/mountblue-technologies/challenges/bon-appetit)

## Problem Description

Anna and Brian are sharing a meal at a restaurant and agree to split the bill equally. However, Anna declines to eat one item (item k). The problem is to determine if the bill was fairly split between them.

### Input Format
1. First line: Two space-separated integers:
   - `n`: Number of items ordered
   - `k`: Zero-based index of the item Anna didn't eat
2. Second line: `n` space-separated integers representing the cost of each item
3. Third line: The amount of money `b` that Brian charged Anna

### Output Format
- If the bill is split fairly: Print "Bon Appétit"
- Otherwise: Print the amount Brian owes Anna (b_charged - b_actual)

### Constraints
- 2 ≤ n ≤ 10⁵
- 0 ≤ k < n
- 0 ≤ cost[i] ≤ 10⁴
- 0 ≤ b ≤ sum of all costs

### Sample Input 1

4 1

3 10 2 9

12


### Sample Output 1
5


### Sample Input 2
4 1

3 10 2 9

7


### Sample Output 2

Bon Appétit