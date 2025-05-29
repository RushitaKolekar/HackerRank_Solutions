# Time Conversion

## 🕒 Problem Description
Convert a 12-hour time format (hh:mm:ssAM/PM) to 24-hour military time (hh:mm:ss).

### Conversion Rules:
- **AM Times**:
  - 12:00:00AM → 00:00:00
  - 01:00:00AM to 11:59:59AM → unchanged (just remove AM)
- **PM Times**:
  - 12:00:00PM to 12:59:59PM → unchanged (just remove PM)
  - 01:00:00PM to 11:59:59PM → add 12 hours

## 🎯 Input/Output Format

### Input
- Single string in 12-hour format (hh:mm:ssAM or hh:mm:ssPM)

### Output
- Converted 24-hour format string

## 📝 Examples

**Example 1:**
Input: "07:05:45PM"

Output: "19:05:45"


**Example 2:**
Input: "12:01:00AM"

Output: "00:01:00"


**Example 3:**
Input: "12:45:54PM"

Output: "12:45:54"