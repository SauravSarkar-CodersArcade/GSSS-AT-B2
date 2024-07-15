#include <iostream>
using namespace std;
int kadaneAlgo(int arr[], int size){
    int currentMax = arr[0];
    int globalMax = arr[0];
    for (int i=1; i<size; i++){
        currentMax = max(arr[i], currentMax + arr[i]);
        globalMax = max(globalMax, currentMax);
    }
    return globalMax;
}
int main() {
//    int arr[] = {-1, -2, -3, -4, -5, 0};
    int arr[] = {5, -8, 1, 2, -1,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = kadaneAlgo(arr, size);
    cout << "Maximum subarray sum: " << maxSum << endl;
    return 0;
}
