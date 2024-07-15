#include <iostream>
using namespace std;
void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // Create two new arrays to store the values
    int *first = new int[len1];
    int *second = new int[len2];
    // Copy the values into the new arrays
    // Left part of the array first
    int mainArrayIndex = s;
    for (int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    // right part of the array
    mainArrayIndex = mid+1;
    for (int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }
    // merge the two parts into one
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 && index2 < len2){
        if (first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
}
void mergeSort(int* arr, int s, int e){
    // Base case
    if (s >= e){
        return;
    }
    int mid = (s+e)/2;
    // Sort the left part of the array
    mergeSort(arr, s, mid);
    // Sort the right part of the array
    mergeSort(arr, mid+1, e);
    // merging the left and the right parts together
    merge(arr, s, e);
}
int main() {
    int arr[] = {38, 27, 43, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    for (int x : arr){
        cout << x << " ";
    }
    return 0;
}
