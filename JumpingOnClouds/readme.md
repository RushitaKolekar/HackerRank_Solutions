# Jumping on the Clouds: Revisited

## ☁️🌀 Problem Description
A character jumps through circular clouds (array of 0s and 1s) where:
- 0 = Safe cloud
- 1 = Thunder cloud (costs 2 extra energy)
- Starts at cloud 0 with 100 energy
- Each jump of size `k` costs 1 energy
- Game ends when returning to cloud 0

Calculate remaining energy after completing the journey.

### Key Rules:
- Array is circular (wraps around)
- Each jump is exactly `k` clouds forward
- Landing on thunder cloud loses additional energy
- Stop when returning to starting cloud (0)

## 🎯 Input/Output Format

### Input
- First line: `n` (number of clouds), `k` (jump distance)
- Second line: `n` space-separated integers (0 or 1)

### Output
- Remaining energy level

## 📝 Example

**Input:**
8 2
0 0 1 0 0 1 1 0


**Output:**
92


**Explanation:**
Path: 0 → 2 → 4 → 6 → 0
- Start: 100
- Jump to 2 (thunder): 100-1-2 = 97
- Jump to 4 (safe): 97-1 = 96
- Jump to 6 (thunder): 96-1-2 = 93
- Jump to 0 (safe): 93-1 = 92 