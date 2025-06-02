# Running Time of Algorithms

## Problem Link
[HackerRank Challenge - Running Time of Algorithms](https://www.hackerrank.com/contests/mountblue-technologies/challenges/runningtime)

## Description
Calculate the number of shifts (element movements) required to sort an array using the Insertion Sort algorithm.

**Key Points:**
- Count every time an element is moved during sorting
- Array is sorted in ascending order
- Shifts occur when elements are moved to make space for the current element
- The count represents the algorithm's time complexity in practice

## Input Format
- First line: `n` (number of elements in array)
- Second line: `n` space-separated integers (the array to sort)

## Output Format
A single integer representing the total number of shifts

## Example
### Input
5
2 1 3 1 2

### Output
4


### Explanation
Sorting process:
1. 2 1 3 1 2 → 1 shift (move 1 before 2)
2. 1 2 3 1 2 → 0 shifts (3 in correct position)
3. 1 2 3 1 2 → 2 shifts (move 1 before 2,3)
4. 1 1 2 3 2 → 1 shift (move 2 before 3)
Total shifts = 1 + 0 + 2 + 1 = 4

## Approach
1. **Insertion Sort Implementation**:
   - Iterate from the second element to the end
   - For each element, shift larger elements right until correct position is found
   - Count each shift operation

2. **Shift Counting**:
   - Increment counter whenever an element is moved
   - Does not count the final insertion

## Edge Cases
- Already sorted array → 0 shifts
- Reverse-sorted array → maximum shifts (n(n-1)/2)
- Single-element array → 0 shifts
- Array with duplicate values

## Constraints
- 1 ≤ n ≤ 1000
- -10000 ≤ array[i] ≤ 10000

