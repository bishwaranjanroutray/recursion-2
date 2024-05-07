#include <iostream>
using namespace std;

void sumtriangle(int arr[], int n) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int ar[n - 1];
    for (int i = 0; i < n - 1; i++) {
        ar[i] = arr[i] + arr[i + 1];
    }
    sumtriangle(ar, n - 1);
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sumtriangle(arr, n);
    return 0;
}