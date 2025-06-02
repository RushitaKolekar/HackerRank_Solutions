# Beautiful Binary String

## Problem Link
[HackerRank Challenge - Beautiful Binary String](https://www.hackerrank.com/contests/mountblue-technologies/challenges/beautiful-binary-string)

## Description
Given a binary string (containing only '0's and '1's), determine the minimum number of changes required to make the string "beautiful" (no occurrences of the substring "010").

**Key Points:**
- Each change flips one bit (0→1 or 1→0)
- Need to eliminate all instances of "010"
- Return the minimum number of changes required

## Input Format
- First line: Integer `n` (length of binary string)
- Second line: Binary string `s` of length `n`

## Output Format
A single integer representing the minimum number of changes needed

## Example
### Input 1
7
0101010

### Output 1
2


### Input 2
5
01100

### Output 2
0