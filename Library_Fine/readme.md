# Library Fine

## 📚 Problem Description
Calculate the library fine based on book return date vs due date:

### Fine Rules:
- **Same Calendar Year**:
  - Returned on or before due date: $0
  - Returned within same month but late: 15 * days late
  - Returned later month but same year: 500 * months late
- **Different Calendar Year**: Fixed $10,000 fine

## 🎯 Input/Output Format

### Input
- First line: `d1 m1 y1` (return date: day, month, year)
- Second line: `d2 m2 y2` (due date: day, month, year)

### Output
- Integer fine amount (or 0 if no fine)

## 📝 Example

**Input:**

9 6 2015

6 6 2015


**Output:**

45

**Explanation:**
- Returned 3 days late (June 9 vs June 6)
- Fine = 15 * 3 = 45