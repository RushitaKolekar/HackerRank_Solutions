#include <vector>
#include <numeric>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    int total = accumulate(bill.begin(), bill.end(), 0);
    int fair_share = (total - bill[k]) / 2; // Exclude k-th item
    if (b == fair_share) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << b - fair_share << endl;
    }
}

// Time Complexity: O(n) 
// Space Complexity: O(1)