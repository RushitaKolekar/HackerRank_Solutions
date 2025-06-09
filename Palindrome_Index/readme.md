# Palindrome Index

## Problem Link
[HackerRank Challenge - Palindrome Index](https://www.hackerrank.com/contests/mountblue-technologies/challenges/palindrome-index)

## Description
Given a string, determine the index of exactly one character that can be removed to make the string a palindrome. Return -1 if already a palindrome or no solution exists.

**Key Points:**
- Only one character removal is allowed
- The string may already be a palindrome
- If multiple solutions exist, return the leftmost valid index
- The string contains only lowercase English letters (a-z)

## Input Format
- First line: `T` (number of test cases)
- Next `T` lines: Strings to check (length 1 ≤ |s| ≤ 10^5 + 5)

## Output Format
For each string, print the index of the character to remove or -1

## Example
### Input
3
aaab
baa
aaa

text
### Output
3
0
-1

### Explanation
1. "aaab":
   - Remove 'b' at index 3 → "aaa" (palindrome)
2. "baa":
   - Remove 'b' at index 0 → "aa" (palindrome)
3. "aaa":
   - Already a palindrome → -1

## Mismatch Resolution
String: "a a c b a a"
↑ ↑
Mismatch at 'c' vs 'b' → Check subcases:

Skip left ('a') → "cbaa" (invalid)

Skip right ('b') → "acaa" (invalid)
Result: -1