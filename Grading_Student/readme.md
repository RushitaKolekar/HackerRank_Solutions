# Grading Students

## 📚 Problem Description
A teacher wants to round student grades according to these rules:
1. If the difference between the grade and the next multiple of 5 is less than 3, round up to that multiple.
2. If the grade is below 38, no rounding occurs (failing grades remain unchanged).

**Example:**  
- 84 → 85 (rounds up, since 85-84 = 1 < 3)  
- 29 → 29 (no rounding, below 38)  
- 57 → 57 (57 → 60 difference is 3, so no rounding)

## 🎯 Input/Output Format

### Input
- First line: `n` (number of students)
- Next `n` lines: Individual grades (0 ≤ grade ≤ 100)

### Output
- List of rounded grades (one per line)

## 📝 Example

**Input:**
# Grading Students

## 📚 Problem Description
A teacher wants to round student grades according to these rules:
1. If the difference between the grade and the next multiple of 5 is less than 3, round up to that multiple.
2. If the grade is below 38, no rounding occurs (failing grades remain unchanged).

**Example:**  
- 84 → 85 (rounds up, since 85-84 = 1 < 3)  
- 29 → 29 (no rounding, below 38)  
- 57 → 57 (57 → 60 difference is 3, so no rounding)

## 🎯 Input/Output Format

### Input
- First line: `n` (number of students)
- Next `n` lines: Individual grades (0 ≤ grade ≤ 100)

### Output
- List of rounded grades (one per line)

## 📝 Example

**Input:**
4
73
67
38
33


**Output:**
75
67
40
33


**Explanation:**
- 73 → 75 (75-73 = 2 < 3)
- 67 → 67 (67 → 70 difference is 3 → no rounding)
- 38 → 40 (40-38 = 2 < 3)
- 33 → 33 (below 38)

## 🔍 Solution Approach

### Key Insight
- For grades ≥ 38:
  - Find the next multiple of 5: `multiple = ((grade // 5) + 1) * 5`
  - Only round if `multiple - grade < 3`



