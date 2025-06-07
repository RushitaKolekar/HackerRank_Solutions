# Chocolate Feast

## Problem Link
[HackerRank Challenge - Chocolate Feast](https://www.hackerrank.com/contests/mountblue-technologies/challenges/chocolate-feast)

## Problem Statement
Bobby wants to maximize his chocolate consumption given:
- **Initial money (n):** Amount to spend
- **Cost per chocolate (c):** Price of one chocolate
- **Wrapper exchange rate (m):** Number of wrappers needed for a free chocolate

**Objective:** Calculate the total chocolates Bobby can consume through initial purchase and wrapper exchanges.

## Key Rules
1. **Initial Purchase:** `floor(n / c)` chocolates
2. **Wrapper Recycling:** 
   - Trade `m` wrappers → 1 free chocolate + 1 new wrapper
   - Continue until wrappers < exchange rate

## Input Format
t # Number of test cases
n c m # Money, cost, exchange rate (per test case)


## Output Format
Total chocolates consumed per test case (one per line)

## Examples
### Input 1
3
10 2 5
12 4 4
6 2 2

### Output 1
6
3
5

text

**Explanation:**
1. **Case 1:** 
   - Initial: $10/$2 = 5 chocolates (5 wrappers)
   - Exchange: 5/5 = 1 chocolate → Total = 6
2. **Case 2:**
   - Initial: $12/$4 = 3 chocolates (3 wrappers → no exchange)
3. **Case 3:**
   - Initial: 3 chocolates (3 wrappers)
   - Exchange: 3/2 = 1 chocolate → 1 + (3%2) = 2 wrappers
   - Exchange: 2/2 = 1 chocolate → Total = 5