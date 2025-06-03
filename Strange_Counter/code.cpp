long strangeCounter(long t) {

    long value=3;
    long time =1;
    
    while(time+value-1 < t){
        time+=value;
        value*=2;
    }
    
    return value-(t-time);
}

//Time Complexity: O(log n)
//Space Complexity: O(1)

// 2nd approach

long strangeCounter(long t) {
    long cycle = 3;
    while (t > cycle) {
        t -= cycle;
        cycle *= 2;
    }
    return cycle - t + 1;
}

// Time Complexity: O(log n)
// Space Complexity: O(1)

//3rd approach 

#include <cmath>

long strangeCounter(long t) {
    long cycle = 3 * pow(2, floor(log2((t+2)/3.0)));
    return cycle - (t - (cycle - 2));
}

// Time Complexity: O(1)
// Space Complexity: O(1)