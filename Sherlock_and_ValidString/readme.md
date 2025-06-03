# Sherlock and Valid String

## Problem Link
[HackerRank Challenge - Sherlock and Valid String](https://www.hackerrank.com/contests/mountblue-technologies/challenges/sherlock-and-valid-string)

## Description
Determine if a string is "valid" where:
- All characters appear with the same frequency, OR
- You can remove exactly 1 character to make frequencies equal

**Key Points:**
- String contains only lowercase English letters (a-z)
- Return "YES" if valid, "NO" otherwise
- Must check both frequency conditions

## Input Format
A single string `s`

## Output Format
"YES" or "NO"

## Example
### Input 1
aabbcc

### Output 1
YES


### Input 2
aabbccc

### Output 2
YES


### Explanation
1. "aabbcc": All characters appear exactly 2 times → valid
2. "aabbccc": Remove one 'c' to make all counts 2 → valid

