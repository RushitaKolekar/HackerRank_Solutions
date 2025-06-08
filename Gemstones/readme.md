# Gemstones

## Problem Link
[HackerRank Challenge - Gemstones](https://www.hackerrank.com/contests/mountblue-technologies/challenges/gem-stones)

## Description
Given multiple rocks (strings), determine how many minerals (characters) are common to **all** rocks. Each mineral is represented by a lowercase letter (a-z).

**Key Points:**
- Case-sensitive: 'a' ≠ 'A'
- A mineral must appear in **every rock** to count
- Duplicates in a single rock don't count extra
- Empty rocks should be handled (though constraints prevent this)

## Input Format
- First line: `n` (number of rocks)
- Next `n` lines: Each rock's mineral composition

## Output Format
Number of gemstone minerals present in all rocks

## Example
### Input
3
abcdde
baccd
eeabg

### Output
2

### Explanation
Common minerals across all rocks:
- 'a' appears in all 3 rocks
- 'b' appears in all 3 rocks
Total gemstones: 2

## Visualization
Rock 1: {'a','b','c','d','e'}
Rock 2: {'a','b','c','d'}
Rock 3: {'a','b','e','g'}
Intersection: {'a','b'} → 2 gemstones