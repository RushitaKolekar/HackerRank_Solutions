# Beautiful Triplets

## Problem Link
[HackerRank Challenge - Beautiful Triplets](https://www.hackerrank.com/contests/mountblue-technologies/challenges/beautiful-triplets)

## Description
Given a sequence of integers in increasing order and a common difference `d`, count the number of beautiful triplets (i, j, k) where:
- i < j < k
- a[j] - a[i] = a[k] - a[j] = d
- All three elements must appear in order in the sequence

**Key Points:**
- Sequence is strictly increasing
- Triplets must maintain order (i < j < k)
- Efficient solution required for large sequences (n ≤ 10⁴)

## Input Format
- First line: Two space-separated integers n (array size) and d (common difference)
- Second line: n space-separated integers representing the sequence

## Output Format
Single integer representing the count of beautiful triplets

## Example
### Input
7 3
1 2 4 5 7 8 10


### Output
3

### Explanation
The beautiful triplets are:
1. (1, 4, 7) → 4-1 = 7-4 = 3
2. (2, 5, 8) → 5-2 = 8-5 = 3
3. (4, 7, 10) → 7-4 = 10-7 = 3