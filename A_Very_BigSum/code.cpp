#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

long aVeryBigSum(vector<long> ar) {
    return accumulate(ar.begin(), ar.end(), 0L); // 0L ensures long addition
}

int main() {
    vector<long> ar = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    cout << aVeryBigSum(ar); // Output: 5000000015
    return 0;
}