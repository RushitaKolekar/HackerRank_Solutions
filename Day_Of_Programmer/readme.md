# Day of the Programmer

## 🗓️ Problem Description
Calculate the date of the 256th day of the year in Russia's transition from Julian to Gregorian calendar (1918).

### Key Rules:
1. **Julian Calendar** (pre-1918):
   - Leap year if divisible by 4
2. **Transition Year** (1918):
   - Jan 31 → Feb 14 (32nd day of year)
3. **Gregorian Calendar** (post-1918):
   - Leap year if:
     - Divisible by 400
     - OR (divisible by 4 AND not divisible by 100)

## 🎯 Input/Output Format

### Input
- Single integer `year` (1700-2700)

### Output
- "dd.mm.yyyy" format of 256th day

## 📝 Example

**Input:**
2016


**Output:**
12.09.2016

**Explanation:**
- 2016 is leap year (Gregorian)
- January: 31 days
- February: 29 days (leap)
- March-August: 184 days
- Total to Aug 31: 244 days
- 256th day: Sept 12 (256 - 244 = 12)