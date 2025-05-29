# Caesar Cipher

## 🔐 Problem Description
Implement the Caesar cipher, a simple encryption technique that shifts each letter in a string by a fixed number of positions down the alphabet. 

### Rules:
1. **Letter Shifting**:
   - Uppercase letters wrap around (Z → B with k=2)
   - Lowercase letters wrap around (z → b with k=2)
2. **Non-alphabetic characters** remain unchanged
3. **Rotation factor** (k) can be larger than 26 (handle with modulo 26)

## 🎯 Input/Output Format

### Input
- First line: `n` (length of string)
- Second line: The unencrypted string `s`
- Third line: `k` (rotation factor)

### Output
- Encrypted string

## 📝 Example

**Input:**
11
middle-Outz
2


**Output:**
okffng-Qwvb

**Explanation:**
- m → o (+2)
- i → k (+2)
- d → f (+2)
- d → f (+2)
- l → n (+2)
- e → g (+2)
- - → - (unchanged)
- O → Q (+2)
- u → w (+2)
- t → v (+2)
- z → b (+2, wraps around)