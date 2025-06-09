# Lisa's Workbook

## Problem Link
[HackerRank Challenge - Lisa's Workbook](https://www.hackerrank.com/contests/mountblue-technologies/challenges/lisa-workbook)

## Description
Lisa's math workbook contains problems organized in chapters:
- Each chapter has `t_i` problems
- Each page holds up to `k` problems
- A problem is **special** if its problem number matches its page number
- Determine how many special problems exist in the workbook

**Key Rules:**
1. Problems are numbered from 1
2. Pages are numbered from 1
3. Problems fill pages sequentially (no empty pages)
4. Each chapter starts on a new page

## Input Format
- First line: `n k` (number of chapters, max problems per page)
- Second line: `n` space-separated integers (problems per chapter)

## Output Format
Count of special problems

## Example
### Input
5 3
4 2 6 1 10

### Output
4

### Explanation
Chapter breakdown:
1. Problems: 1,2,3 | 4 → Pages: [1-3], [4] → Special: 1,4
2. Problems: 1,2 → Page: [1-2] → Special: 1
3. Problems: 1,2,3 | 4,5,6 → Pages: [1-3], [4-6] → Special: 3,4
4. Problems: 1 → Page: [1] → Special: 1
5. Problems: 1,2,3 | 4,5,6 | 7,8,9 | 10 → Pages: [1-3], [4-6], [7-9], [10] → Special: none
Total special problems: 4

## Visualization
Chapter 1 (4 problems, k=3):
Page 1: [1,2,3] → Problem 1 matches
Page 2: [4] → Problem 4 matches
Chapter 2 (2 problems):
Page 3: [1,2] → Problem 1 matches