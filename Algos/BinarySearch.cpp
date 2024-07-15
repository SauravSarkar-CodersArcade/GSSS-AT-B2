#include <iostream>
using namespace std;
int binarySearch(const int arr[], int n, int key){
    int start = 0, end = n-1, mid = 0;
    while (start <= end){
        mid = start + (end - start)/2;
        if (arr[mid] == key){
            return mid;
        }else if (arr[mid] > key){
            end = mid - 1;
        }else {
            start = mid + 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << binarySearch(arr, n, 70);
    return 0;
}
