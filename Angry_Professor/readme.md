# Angry Professor

## 👨‍🏫⏰ Problem Description
A professor decides to cancel class if fewer than `k` students arrive on time. Given arrival times of `n` students, determine if the class is canceled.

### Key Rules:
- Arrival time ≤ 0 → On time
- Arrival time > 0 → Late
- Class is canceled if count of on-time students < `k`

## 🎯 Input/Output Format

### Input
- First line: `t` (number of test cases)
- Each test case:
  - First line: `n` (students), `k` (threshold)
  - Second line: `n` space-separated arrival times

### Output
- For each test case: "YES" if canceled, "NO" otherwise

## 📝 Example

**Input:**
2
4 3
-1 -3 4 2
4 2
0 -1 2 1


**Output:**
YES
NO


**Explanation:**
**Test Case 1**:
- On-time arrivals: -1, -3 (2 students)
- 2 < 3 → "YES" (canceled)

**Test Case 2**:
- On-time arrivals: 0, -1 (2 students)
- 2 ≥ 2 → "NO" (not canceled)