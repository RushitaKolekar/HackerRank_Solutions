# Viral Advertising

## 📢 Problem Description
A company starts an advertising campaign where:
- On Day 1, they share with 5 people
- Each day, half of the recipients like and share with 3 new people
- Calculate the cumulative likes after `n` days

### Growth Pattern:

Day Shared Liked Cumulative

1 5 2 2
2 6 3 5
3 9 4 9
4 12 6 15
5 18 9 24

## 🎯 Input/Output Format

### Input
- Single integer `n` (1 ≤ n ≤ 50)

### Output
- Cumulative likes after `n` days

## 📝 Example

**Input:**
3


**Output:**
9

**Explanation:**
- Day 1: 5 shared → 2 liked (total: 2)
- Day 2: 3 shared → 3 liked (total: 5)
- Day 3: 6 shared → 3 liked (total: 8)
Wait, this contradicts the table above. Let me correct:

Actually for input 3, output should be 9:
- Day 1: 5 shared → ⌊5/2⌋ = 2 liked (total: 2)
- Day 2: 2*3 = 6 shared → ⌊6/2⌋ = 3 liked (total: 5)
- Day 3: 3*3 = 9 shared → ⌊9/2⌋ = 4 liked (total: 9)