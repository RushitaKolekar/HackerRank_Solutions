# Sequence Equation (Permutation Equation)

## 🔄 Problem Description
Given a permutation `p` of numbers from 1 to n, find for each `x` (1 ≤ x ≤ n) the value `y` such that:
p(p(y)) = x

Return the results in order from x=1 to x=n.

### Key Points:
- `p` is a permutation (contains all numbers 1 to n exactly once)
- Need to find the inverse mapping of the permutation

## 🎯 Input/Output Format

### Input
- First line: `n` (size of permutation)
- Second line: `n` space-separated integers (the permutation p)

### Output
- `n` lines: y values for x from 1 to n

## 📝 Example

**Input:**
3
2 3 1


**Output:**
2
3
1


**Explanation:**
For x=1:
- p(p(2)) = p(3) = 1 → y=2
For x=2:
- p(p(3)) = p(1) = 2 → y=3
For x=3:
- p(p(1)) = p(2) = 3 → y=1
