# ACM ICPC Team

## Problem Link
[HackerRank Challenge - ACM ICPC Team](https://www.hackerrank.com/contests/mountblue-technologies/challenges/acm-icpc-team)

## Description
Given `n` people's binary skill sets (1=known, 0=unknown) across `m` topics, determine:
1. The maximum number of topics a 2-person team can know
2. How many teams can achieve this maximum

**Key Points:**
- Skill sets are represented as binary strings
- Team knowledge is the union (OR) of members' skills
- Count the number of '1's in the OR result
- All possible pairs must be considered (n choose 2)

## Input Format
- First line: `n m` (number of people, number of topics)
- Next `n` lines: Binary strings of length `m`

## Output Format
Two lines:
1. Maximum topics known by any team
2. Number of teams that know this many topics

## Example
### Input

4 5
10101
11100
11010
00101

### Output
5
2

### Explanation
- Team (1,3): 10101 | 11010 = 11111 → 5 topics
- Team (2,3): 11100 | 11010 = 11110 → 4 topics
- Best teams: (1,3) and (1,4) both achieve 5 topics

## Bitwise Visualization
Person 1: 10101 (0x15)
Person 3: 11010 (0x1A)
OR Result: 11111 (0x1F) → 5 set bits