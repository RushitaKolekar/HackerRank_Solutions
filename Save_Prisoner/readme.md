# Save the Prisoner

## ⛓️ Problem Description
A jail has `n` prisoners sitting in a circle, numbered from `1` to `n`. The jailer distributes sweets starting from prisoner `s`, moving around the circle `m` times. Determine which prisoner receives the last sweet.

### Key Rules:
- Distribution starts at prisoner `s`
- Sweets are distributed one-by-one in a circle
- Last sweet is poisonous
- Need to find the prisoner who gets the last sweet

## 🎯 Input/Output Format

### Input
- First line: `t` (number of test cases)
- Next `t` lines: Three space-separated integers:
  - `n` (number of prisoners)
  - `m` (number of sweets)
  - `s` (starting prisoner)

### Output
- For each test case, print the prisoner who gets the last sweet

## 📝 Example

**Input:**
1
5 2 1


**Output:**
5


**Explanation:**
- Prisoners: [1, 2, 3, 4, 5]
- Distribution:
  - Sweet 1 → Prisoner 1
  - Sweet 2 → Prisoner 2 (last sweet)

  
**Another Example:**
4 6 2

Output: `3` (Full cycle: 2→3→4→1→2→3)

