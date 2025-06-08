# Funny String

## Problem Link
[HackerRank Challenge - Funny String](https://www.hackerrank.com/contests/mountblue-technologies/challenges/funny-string)

## Description
Determine if a string is "funny" by comparing absolute differences of adjacent characters in:
1. The original string
2. Its reverse

**Funny Condition:**  
All corresponding differences must be equal

## Input Format
- First line: `T` (number of test cases)
- Next `T` lines: Strings to check (length 2-10000)

## Output Format
For each string: "Funny" or "Not Funny"

## Example
### Input
2
acxz
bcxz


### Output
Funny
Not Funny

### Explanation
**Case 1: "acxz"**
- Forward differences: |c-a|=2, |x-c|=21, |z-x|=2
- Reverse differences: |z-x|=2, |x-c|=21, |c-a|=2
- All match → "Funny"

**Case 2: "bcxz"**
- Forward: |c-b|=1, |x-c|=21, |z-x|=2
- Reverse: |z-x|=2, |x-c|=21, |c-b|=1
- First/last differences don't match → "Not Funny"

## Difference Visualization
String: a c x z
↓ ↓ ↓
Diff: 2 21 2

Reverse: z x c a
↓ ↓ ↓
Diff: 2 21 2