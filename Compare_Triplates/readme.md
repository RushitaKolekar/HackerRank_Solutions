# Compare the Triplets Problem Solution

[![Problem Link](https://img.shields.io/badge/HackerRank-Problem%20Link-blue)](https://www.hackerrank.com/contests/mountblue-technologies/challenges/compare-the-triplets)

## Problem Description

Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.

The rating for Alice's challenge is the triplet `a = (a[0], a[1], a[2])`, and the rating for Bob's challenge is the triplet `b = (b[0], b[1], b[2])`.

Your task is to compare the triplets and determine their comparison points:
- Alice receives 1 point if a[i] > b[i]
- Bob receives 1 point if a[i] > b[i]
- No one receives a point if a[i] == b[i]

### Input Format
- First line: 3 space-separated integers (Alice's triplet)
- Second line: 3 space-separated integers (Bob's triplet)

### Constraints
- 1 ≤ a[i], b[i] ≤ 100

### Output Format
Return an array with two integers where:
- First element: Alice's total points
- Second element: Bob's total points

### Sample Input

5 6 7

3 6 10


### Sample Output

1 1