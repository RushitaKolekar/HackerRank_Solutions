# Breaking Records Problem Solution

[![Problem Link](https://img.shields.io/badge/HackerRank-Problem%20Link-blue)](https://www.hackerrank.com/contests/mountblue-technologies/challenges/breaking-best-and-worst-records)

## Problem Description

Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

Given the scores for a season, determine the number of times Maria breaks her records for most and least points scored during the season.

### Input Format
- The first line contains an integer `n`, the number of games.
- The second line contains `n` space-separated integers describing the scores for each game.

### Constraints
- 1 ≤ n ≤ 1000
- 0 ≤ scores[i] ≤ 10⁸

### Output Format
Return an array with two integers:
1. Number of times she broke her best record
2. Number of times she broke her worst record

### Sample Input
n=9

10 5 20 20 4 5 2 25 1

### Sample Output
2 4