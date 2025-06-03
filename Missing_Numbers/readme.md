# Missing Numbers

## Problem Link
[HackerRank Challenge - Missing Numbers](https://www.hackerrank.com/contests/mountblue-technologies/challenges/missing-numbers)

## Description
Given two arrays of integers where one array (arr) is a subset of another (brr) with some numbers missing:
- Find all numbers that are present in brr but missing in arr
- The arrays may contain duplicates
- Return the missing numbers in ascending order

**Key Points:**
- arr is the incomplete array
- brr is the original complete array
- Numbers can range from 1 to 10,000
- Must maintain frequency counts (if a number appears more times in brr than arr)

## Input Format
1. First line: n (size of arr)
2. Second line: n space-separated integers (arr)
3. Third line: m (size of brr)
4. Fourth line: m space-separated integers (brr)

## Output Format
Space-separated list of missing numbers in ascending order

## Example
### Input
6
203 204 205 206 207 208
8
203 204 204 205 206 207 208 209

### Output
204 209

### Explanation
- 204 appears twice in brr but once in arr → missing one occurrence
- 209 appears in brr but not in arr → completely missing

## Optimal Approach
1. **Frequency Counting**:
   - Create frequency dictionaries for both arrays
2. **Compare Frequencies**:
   - For each number in brr:
     - If not in arr or has lower frequency → add to missing numbers
3. **Sort Results**:
   - Return missing numbers in ascending order