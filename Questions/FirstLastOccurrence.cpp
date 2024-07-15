#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s <= e){
        if (arr[mid] == key){
            ans = mid;
            e = mid -1;
        }else if (key > arr[mid]){
            s = mid + 1;
        }else if (key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s <= e){
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }else if (key > arr[mid]){
            s = mid + 1;
        }else if (key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    int arr[] = {1,2,3,3,3,3,4,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << "First Occurrence is: " <<
    firstOccurrence(arr, n, 3) << endl;
    cout << "Last Occurrence is: " <<
         lastOccurrence(arr, n, 3) << endl;
    return 0;
}
