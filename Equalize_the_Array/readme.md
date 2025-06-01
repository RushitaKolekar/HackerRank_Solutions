# Equalize the Array

## ⚖️ Problem Description
Given an array of integers, determine the minimum number of deletions required to leave only elements of equal value.

### Key Points:
- All remaining elements must be the same after deletions
- We want to keep the maximum frequency element
- Minimum deletions = Total elements - Frequency of most common element

## 🎯 Input/Output Format

### Input
- First line: `n` (size of array)
- Second line: `n` space-separated integers (array elements)

### Output
- Minimum number of deletions required

## 📝 Example

**Input:**
5
3 3 2 1 3


**Output:**
2


**Explanation:**
- Most frequent element: 3 (appears 3 times)
- Minimum deletions = 5 (total) - 3 (frequency of 3) = 2
- Delete one 2 and one 1 to have [3, 3, 3]