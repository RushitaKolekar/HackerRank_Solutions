# Drawing Book

## Problem Statement
A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back. The book is arranged so that:
- Each page has two sides (left and right), except possibly the last page if the total number of pages is odd.
- Page `1` is always on the right side.

When opened to page `1`, you see:  
`[ [], [1] ]`  
When flipped to page `2`, you see:  
`[ [2], [3] ]`  
And so on...

**Goal:** Find the minimum number of page turns needed to reach a given page `p`, starting from either the front (`page 1`) or the back (`page n`).

## Example
**Input:**
n = 5
p = 3

**Output**
1

**Explanation:**
- From the front: 
  - Start at page `1` → `0` turns
  - Turn to `[2,3]` → `1` turn (reaches page `3`)
- From the back:
  - Start at page `5` → `0` turns
  - Turn to `[4,5]` → `1` turn (still on page `5`)
  - Turn to `[2,3]` → `2` turns (reaches page `3`)
- Minimum turns: `1` (from the front)

## Input Format
- First line: `n` (total pages in the book)
- Second line: `p` (target page number)

## Constraints
- `1 ≤ n ≤ 10^5`
- `1 ≤ p ≤ n`

## Output Format
Print the minimum number of page turns required.

