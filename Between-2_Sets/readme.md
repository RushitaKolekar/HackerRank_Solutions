# Between Two Sets

## 🔢 Problem Description
Find the number of integers that satisfy two conditions:
1. All elements of array `a` are factors of the integer
2. The integer is a factor of all elements of array `b`

### Key Points:
- First condition: x must be divisible by every element in `a`
- Second condition: Every element in `b` must be divisible by x
- Return count of such integers x

## 🎯 Input/Output Format

### Input
- First line: `n` and `m` (sizes of arrays a and b)
- Second line: `n` space-separated integers (array a)
- Third line: `m` space-separated integers (array b)

### Output
- Count of integers satisfying both conditions

## 📝 Example

**Input:**

2 3
2 4
16 32 96


**Output:**
3

**Explanation:**
Possible x values: 4, 8, 16
- 4: 
  - 4%2=0, 4%4=0 (satisfies array a)
  - 16%4=0, 32%4=0, 96%4=0 (satisfies array b)
- Similarly for 8 and 16