#include <iostream>
#include <climits>
using namespace std;

void max_min_swap(int arr[], int n) {
    int maxIndex = 0, minIndex = 0;
    int maxVal = INT_MIN, minVal = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    swap(arr[maxIndex], arr[minIndex]);
}

int main() {
    int arr[] = {5, 7, 8, 11, 15};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    max_min_swap(arr, n);

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
