# Electronics Shop

## 💻🖱️ Problem Description
A person wants to buy one keyboard and one USB drive from an electronics shop. Given:
- Array of keyboard prices
- Array of USB drive prices
- Budget amount

Find the maximum total price that doesn't exceed the budget. If no combination is possible, return -1.

### Key Points:
- Must buy exactly one keyboard and one USB drive
- Total cost cannot exceed budget
- Want the maximum possible sum within budget

## 🎯 Input/Output Format

### Input
- First line: `b` (budget), `n` (keyboards), `m` (USB drives)
- Second line: `n` keyboard prices
- Third line: `m` USB drive prices

### Output
- Maximum total price within budget, or -1 if not possible

## 📝 Example

**Input:**
10 2 3
3 1
5 2 8


**Output:**
9

**Explanation:**
Possible combinations:
- 3+5=8
- 3+2=5
- 3+8=11 (over budget)
- 1+5=6
- 1+2=3
- 1+8=9 (best valid option)