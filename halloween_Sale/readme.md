# Halloween Sale

## Problem Link
[HackerRank Challenge - Halloween Sale](https://www.hackerrank.com/contests/mountblue-technologies/challenges/halloween-sale)

## Description
Determine how many games you can buy during a Halloween sale with these rules:
1. First game costs `p` dollars
2. Each subsequent game costs `d` dollars less than the previous
3. Prices never go below `m` dollars (minimum price)
4. You have `s` dollars to spend

**Key Points:**
- Games must be purchased in price order
- Stop when remaining money can't buy next game
- Must calculate maximum number of affordable games

## Input Format
Single line with four space-separated integers:
`p d m s` where:
- p = initial price
- d = price reduction per game
- m = minimum price
- s = budget

## Output Format
Single integer: maximum number of games

## Example
###Input
20 3 6 80

### Output
6


### Explanation
Game prices: 20, 17, 14, 11, 8, 6, 6...  
Purchases:
1. 20 (remaining: 60)
2. 17 (remaining: 43)
3. 14 (remaining: 29)
4. 11 (remaining: 18)
5. 8 (remaining: 10)
6. 6 (remaining: 4)
Can't afford next game (needs 6, has 4)