# Taum and B'day

## Problem Link
[HackerRank Challenge - Taum and B'day](https://www.hackerrank.com/contests/mountblue-technologies/challenges/taum-and-bday)

## Description
Taum needs to buy gifts for his friends with optimal cost considering:
- **Black gifts**: Cost `b` units each
- **White gifts**: Cost `w` units each
- **Conversion cost**: `c` units to convert between colors
- Goal: Minimize total cost for required quantities

**Key Constraints:**
- Can convert gifts at given cost
- Must purchase exact required quantities
- No partial conversions allowed

## Input Format
First line: `t` (number of test cases)  
Next `t` lines (per case):  
`b w` (required black/white gifts)  
`bc wc z` (black cost, white cost, conversion cost)

## Output Format
Minimum cost for each test case

## Example
### Input
1
10 10
1 1 1

### Output
20


### Input 2
1
5 9
2 3 4

### Output 2
37


### Explanation
**Case 1:**  
Buy directly (10*1 + 10*1 = 20)  
Conversion offers no advantage  

**Case 2:**  
Optimal strategy:  
- Buy all black at 2 (5*2 = 10)  
- Convert black→white for white gifts:  
  (9*(2+4) = 54) would cost 64  
- Better to buy white directly: 9*3 = 27  
Total: 10 + 27 = 37 

## Cost Calculation Formulas
Option 1: bbc + wwc
Option 2: bbc + w(bc + z)
Option 3: wwc + b(wc + z)
Result: min(Option1, Option2, Option3)

## Decision Visualization
When bc + z < wc → Convert white via black
When wc + z < bc → Convert black via white
Else → Buy directly
