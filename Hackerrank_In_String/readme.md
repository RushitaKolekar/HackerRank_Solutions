# HackerRank in a String!

## Problem Link
[HackerRank Challenge - HackerRank in a String!](https://www.hackerrank.com/contests/mountblue-technologies/challenges/hackerrank-in-a-string)

## Description
Given a string, determine if it contains the letters 'h','a','c','k','e','r','r','a','n','k' in order to form the word "hackerrank" as a subsequence.

**Key Points:**
- Letters must appear in correct order but not necessarily consecutively
- Case sensitive - must match lowercase letters exactly
- Each character in "hackerrank" must appear in sequence

## Input Format
- First line: `q` (number of queries)
- Next `q` lines: Strings to evaluate

## Output Format
For each string, print "YES" if it contains "hackerrank" as a subsequence, else "NO"

## Example
### Input
2
hereiamstackerrank
hackerworld


### Output
YES
NO

### Explanation
1. "hereiamstackerrank" contains:
   h, e, r, e, i, a, m, s, t, a, c, k, e, r, r, a, n, k → forms "hackerrank" in order
2. "hackerworld" misses several letters after 'hacke'