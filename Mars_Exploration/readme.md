
# Mars Exploration

## 🚀 Problem Description
A space probe sends messages to Earth as repetitions of "SOS". During transmission, some letters may be altered by cosmic radiation. Your task is to determine how many letters were changed in the received message.

### Key Points:
- Original message: Repeated "SOS" (e.g., "SOSSOSSOS")
- Received message: Same length but some characters may differ
- Count how many characters differ from the original pattern

## 🎯 Input/Output Format

### Input
- Single string `s` (the received message)
- Length is guaranteed to be multiple of 3

### Output
- Number of altered characters

## 📝 Example

**Input:**
SOSTOT


**Output:**
2

**Explanation:**
- Expected: SOS TOS
- Received: SOS TOT
- Differences: 
  - 4th char: 'T' (expected 'O') → 1
  - 6th char: 'T' (expected 'S') → 1
- Total altered: 2