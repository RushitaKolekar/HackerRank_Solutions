# Strong Password

## 🔒 Problem Description
Louise wants to create a strong password that meets the following criteria:
1. Minimum length of 6 characters
2. Contains at least:
   - 1 digit (0-9)
   - 1 lowercase letter (a-z)
   - 1 uppercase letter (A-Z)
   - 1 special character (!@#$%^&*()-+)

Given a password, determine the minimum number of characters she must add to make it strong.

## 🎯 Input/Output Format

### Input
- First line: `n` (length of current password)
- Second line: The password string

### Output
- Minimum characters needed to meet all requirements

## 📝 Example

**Input:**

5
2bb#A


**Output:**

1


**Explanation:**
The password already contains:
- Digit (2)
- Lowercase (b)
- Uppercase (A)
- Special character (#)
But its length is 5, needs 1 more character to reach minimum length of 6.

## 🔍 Solution Approach

### Method:
1. Check which categories are missing
2. Calculate required additions for missing categories
3. Compare with length requirement (6 - n)
4. Return the larger number