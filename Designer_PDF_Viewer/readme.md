# Designer PDF Viewer

## Problem Link
[HackerRank Challenge - Designer PDF Viewer](https://www.hackerrank.com/contests/mountblue-technologies/challenges/designer-pdf-viewer)

## Description
When selecting text in a PDF viewer, the highlighted area depends on:
1. The height of each letter (given for all 26 lowercase letters)
2. The word being highlighted (case-sensitive, only lowercase letters)
3. Each character's width is exactly 1mm

Calculate the highlighted area (height × width) in mm².

**Key Points:**
- Height determined by tallest letter in the word
- Width equals the number of letters in the word
- All letters are lowercase English alphabets (a-z)

## Input Format
1. First line: 26 space-separated integers (heights for a-z)
2. Second line: A single word (string)

## Output Format
A single integer representing the highlighted area

## Example
### Input
1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
abc

### Output
9

### Explanation
- Heights: a=1, b=3, c=1
- Tallest letter: b (height=3)
- Word length: 3
- Area: 3 × 3 = 9