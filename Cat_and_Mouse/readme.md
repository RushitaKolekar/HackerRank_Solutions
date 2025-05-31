# Cats and a Mouse

## 🐱🐭 Problem Description
Two cats (Cat A and Cat B) are chasing a mouse at position C on a straight line. Determine which cat reaches the mouse first or if they arrive at the same time.

### Rules:
- Cat A starts at position `x`
- Cat B starts at position `y`
- Mouse is at position `z`
- All positions are on a number line
- Cats move at equal speed (1 unit per time step)
- If both cats arrive simultaneously, the mouse escapes

## 🎯 Input/Output Format

### Input
- First line: `q` (number of queries)
- Next `q` lines: Three space-separated integers `x y z` (positions)

### Output
- For each query: 
  - "Cat A" if A catches mouse first
  - "Cat B" if B catches mouse first
  - "Mouse C" if both arrive at same time

## 📝 Example

**Input:**

2
1 2 3
1 3 2


**Output:**

Cat B
Mouse C

**Explanation:**
**Query 1**:
- Distances: A→3 = |1-3| = 2, B→3 = |2-3| = 1
- B is closer → "Cat B"

**Query 2**:
- Distances: A→2 = |1-2| = 1, B→2 = |3-2| = 1
- Equal distances → "Mouse C"