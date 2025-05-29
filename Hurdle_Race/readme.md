# The Hurdle Race

## 🏃‍♂️ Problem Description
A video player wants to jump hurdles in a game. Each hurdle has a height, and the player can jump a maximum height equal to their natural jumping ability. They can drink magic potions to increase their jump height by 1 unit per potion. Determine the minimum number of potions needed to clear all hurdles.

### Key Points:
- Player has initial jump height `k`
- Hurdles have varying heights in an array `height`
- Each potion increases jump height by 1
- Need to find how many potions needed to clear the highest hurdle

## 🎯 Input/Output Format

### Input
- First line: Two space-separated integers `n` (number of hurdles) and `k` (initial jump height)
- Second line: `n` space-separated integers representing hurdle heights

### Output
- Single integer (minimum potions needed, or 0 if can already clear all hurdles)

## 📝 Example

**Input:**

n=5  k=4

1 6 3 5 2


**Output:**
2

**Explanation:**
- Highest hurdle: 6
- Initial jump: 4
- Potions needed: 6 - 4 = 2