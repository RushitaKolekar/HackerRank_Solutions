# Birthday Cake Candles

## 🎂 Problem Description
You are in charge of the cake for a child's birthday. On the cake, there are candles with different heights. The child can only blow out the tallest candles. 

Your task is to determine how many candles are tallest.

## 🎯 Input/Output Format

### Input
- First line: `n` (number of candles)
- Second line: `n` space-separated integers (candle heights)

### Output
- Single integer (count of tallest candles)

## 📝 Example

**Input:**
4
3 2 1 3


**Output:**
2



**Explanation:**
- Candle heights: [3, 2, 1, 3]
- Maximum height: 3
- Number of tallest candles: 2 (there are two candles of height 3)

## 🔍 Solution Approaches

### Method 1: Simple Counting
1. Find the maximum candle height
2. Count how many times this maximum appears

### Method 2: One-Pass Solution
1. Track maximum height and count while iterating
2. Update count when finding new maximum
3. Increment count when finding same maximum

