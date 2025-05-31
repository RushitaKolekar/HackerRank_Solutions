# CamelCase

## 🐫 Problem Description
Count the number of words in a camelCase string where:
- The first word starts with lowercase letter
- Each subsequent word begins with an uppercase letter
- There are no spaces or punctuation between words

### Example:
- "saveChangesInTheEditor" contains 5 words:
  - save
  - Changes
  - In
  - The
  - Editor

## 🎯 Input/Output Format

### Input
- A single string `s` in camelCase format (1 ≤ length ≤ 10^5)

### Output
- Integer count of words in the string

## 📝 Example

**Input:**
saveChangesInTheEditor


**Output:**
5


**Explanation:**
Uppercase letters at positions: 4, 11, 13, 16 indicate new words:
1. save
2. Changes
3. In
4. The
5. Editor