# Beautiful Days at the Movies

## 🎬 Problem Description
A day is considered beautiful if the absolute difference between a number and its reverse is divisible by a given integer `k`.

Given a range of numbers from `i` to `j`, count how many beautiful days exist.

### Key Points:
- Reverse the number (e.g., 20 → 02 → 2)
- Calculate absolute difference: |original - reversed|
- Check divisibility by `k` (with remainder 0)
- Count all numbers in range [i,j] satisfying this condition

## 🎯 Input/Output Format

### Input
- Three space-separated integers:
  - `i` (starting day number)
  - `j` (ending day number)
  - `k` (divisor)

### Output
- Count of beautiful days in the range

## 📝 Example

**Input:**
20 23 6

**Output:**
2

**Explanation:**
- Day 20: |20 - 02| = 18 → 18%6=0 → beautiful
- Day 21: |21 - 12| = 9 → 9%6≠0
- Day 22: |22 - 22| = 0 → 0%6=0 → beautiful
- Day 23: |23 - 32| = 9 → 9%6≠0
Total beautiful days: 2