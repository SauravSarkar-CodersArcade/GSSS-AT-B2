#include <iostream>
using namespace std;
int recursiveBinarySearch(int arr[], int end, int start, int key){
    if (start <= end){
        int mid = start + (end - start)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] > key){
            return recursiveBinarySearch(arr, mid-1, start, key);
        }else {
            return recursiveBinarySearch(arr, end, mid+1, key);
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << recursiveBinarySearch(arr, n-1, 0, 3);
    return 0;
}
