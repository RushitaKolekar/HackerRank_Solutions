#include <vector>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    int pairs = 0;
    vector<bool> counted(n, false); // To avoid recounting
    
    for (int i = 0; i < n; i++) {
        if (!counted[i]) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (ar[i] == ar[j] && !counted[j]) {
                    count++;
                    counted[j] = true;
                }
            }
            pairs += count / 2;
        }
    }
    return pairs;
}