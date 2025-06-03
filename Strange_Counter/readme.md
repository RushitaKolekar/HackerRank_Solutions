# Strange Counter

## Problem Link
[HackerRank Challenge - Strange Counter](https://www.hackerrank.com/contests/mountblue-technologies/challenges/strange-code)

## Description
A counter displays a sequence that follows this pattern:
- Starts at time t=1 with value=3
- Each cycle doubles the starting value and lasts for that duration
- Values count down to 1 before next cycle begins

Given a time `t`, determine the counter's displayed value.

**Key Behavior:**Time (t)	Value
1	3
2	2
3	1
4	6 (new cycle starts)
5	5
6	4
7	3
8	2
9	1
10	12 (new cycle starts)

## Input Format
A single integer `t` (1 ≤ t ≤ 10¹²)

## Output Format
The counter's value at time `t`

## Example
### Input
4

### Output
6


### Input
9

### Output
1


## Mathematical Approach
1. **Identify Cycle**:
   - Each cycle lasts for `3 * 2ⁿ` time units (n=0,1,2...)
   - Find which cycle contains time `t`
2. **Calculate Value**:
   - Cycle start time: `3 * (2ⁿ - 1) + 1`
   - Value at `t`: `3 * 2ⁿ - (t - start_time)`

## Edge Cases
- t=1 → 3
- t at cycle boundaries (3,9,21...)
- Very large t (10¹²)
- t in first cycle (t ≤ 3)


## Key Insight
The problem follows a geometric progression where each cycle's duration doubles while starting value also doubles.

## Cycle Pattern Visualization
Cycle | Start Time | End Time | Start Value
0 | 1 | 3 | 3
1 | 4 | 9 | 6
2 | 10 | 21 | 12
3 | 22 | 45 | 24
... | ... | ... | ...
n | 3*(2ⁿ-1)+1 | 3*(2ⁿ⁺¹-1) | 3*2ⁿ



