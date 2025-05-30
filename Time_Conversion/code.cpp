#include <string>
using namespace std;

string timeConversion(string s) {
    // Extract AM/PM indicator
    string period = s.substr(8, 2);
    string hour_str = s.substr(0, 2);
    int hour = stoi(hour_str);
    
    // Conversion rules
    if (period == "PM" && hour != 12) {
        hour += 12;
    } 
    else if (period == "AM" && hour == 12) {
        hour = 0;
    }
    
    // Format with leading zero
    char buffer[3];
    snprintf(buffer, sizeof(buffer), "%02d", hour);
    
    return string(buffer) + s.substr(2, 6);
}

// Time Complexity: O(1)
// Space Complexity: O(1)