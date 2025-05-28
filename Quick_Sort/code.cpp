//inplace partitioning quick sort

#include <vector>
using namespace std;

vector<int> quickSort(vector<int> arr) {
    int pivot = arr[0];
    int i = 0; // Tracks the boundary of elements < pivot
    for (int j = 1; j < arr.size(); j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[0], arr[i]); // Place pivot in its correct position
    return arr;
}

// time complexity: O(n) and space complexity: O(1)

//optimized approach

#include <vector>
using namespace std;

vector<int> quickSort(vector<int> arr) {
    int pivot = arr[0];
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high) {
        if (arr[mid] < pivot) swap(arr[low++], arr[mid++]);
        else if (arr[mid] == pivot) mid++;
        else swap(arr[mid], arr[high--]);
    }
    return arr;
}

// time complexity: O(n) and space complexity: O(1)