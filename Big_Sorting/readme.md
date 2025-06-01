# Big Sorting

## Problem Link
[HackerRank Challenge - Big Sorting](https://www.hackerrank.com/contests/mountblue-technologies/challenges/big-sorting)

## Description
Given an array of numeric strings in arbitrary order, sort them in ascending order and print each string on a new line. The challenge lies in handling very large numbers that cannot be converted to standard 32-bit or 64-bit integers.

**Key Points:**
- Numbers are provided as strings to accommodate very large values
- Must maintain precision during sorting (no numeric conversion)
- Need efficient sorting for large input sizes (up to 2×10⁵ elements)

## Input Format
1. First line: `n` (number of unsorted numeric strings)
2. Next `n` lines: Each contains a numeric string `s` where:
   - 1 ≤ length of `s` ≤ 10⁶
   - Each character is a digit (0-9)
   - No leading zeros except for the number "0" itself

## Output Format
Print each string from the sorted array on a new line.

## Example
### Input
6
31415926535897932384626433832795
1
3
10
3
5


### Output
1
3
3
5
10
31415926535897932384626433832795


## Constraints
- 1 ≤ n ≤ 2×10⁵
- Each string is guaranteed to be a valid non-negative integer
- The total sum of string lengths across all test cases ≤ 10⁶

## Approach Considerations
1. **String Length First**: Shorter strings represent smaller numbers
2. **Lexicographical Order**: For strings of equal length, compare character by character
3. **Efficiency**: Standard O(n log n) sorting algorithms may need optimization for very large n

## Edge Cases
- Single element arrays
- All elements being equal
- Very large numbers vs very small numbers
- Numbers with leading zeros 