# Counting Valleys

## 🏔️ Problem Description
An avid hiker tracks their steps with `U` (uphill) and `D` (downhill) characters. A valley is defined as:
- A sequence of steps starting with a step down from sea level
- Ending with a step up to sea level

Given the path, count how many valleys the hiker traversed.

### Key Points:
- Start and end at sea level (altitude = 0)
- Each `U` increases altitude by 1
- Each `D` decreases altitude by 1
- Valley = consecutive steps below sea level returning to sea level

## 🎯 Input/Output Format

### Input
- First line: `n` (number of steps)
- Second line: String of `U`/`D` characters (path)

### Output
- Number of valleys traversed

## 📝 Example

**Input:**

8
UDDDUDUU


**Output:**
1

**Explanation:**
Step Altitude Note
0 0 Start
1 U 1
2 D 0
3 D -1 Valley starts
4 D -2
5 U -1
6 D -2
7 U -1
8 U 0 Valley ends