# Marc's Cakewalk

## 🍰 Problem Description
Marc loves cupcakes and wants to minimize his calorie intake while walking. Each cupcake has a certain calorie count. He must eat all cupcakes but wants to minimize the total miles he will need to walk to burn them off.

### Key Rules:
- For each cupcake, miles = (2^j) × c
  - `j` is the number of cupcakes eaten before it (0-based)
  - `c` is the calorie count of the current cupcake
- Arrange cupcakes to minimize total miles
- Higher calorie cupcakes should be eaten earlier to reduce the 2^j multiplier

## 🎯 Input/Output Format

### Input
- First line: `n` (number of cupcakes)
- Second line: `n` space-separated integers (calorie counts)

### Output
- Minimum total miles Marc must walk

## 📝 Example

**Input:**
3
1 3 2


**Output:**
11


**Explanation:**
Optimal order: [3, 2, 1]
- 3 × 2⁰ = 3
- 2 × 2¹ = 4
- 1 × 2² = 4
Total miles: 3 + 4 + 4 = 11