#include <iostream>
using namespace std;
void reverseArrayLogical(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void reverseArrayBuiltIn(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Before reversal: " << endl;
    for (int x : arr){
        cout << x << " ";
    }
    cout << endl;
    reverseArrayLogical(arr, size);
    cout << "After reversal: " << endl;
    for (int x : arr){
        cout << x << " ";
    }
    cout << endl;
    cout << "Before reversal: " << endl;
    for (int x : arr){
        cout << x << " ";
    }
    cout << endl;
    reverseArrayBuiltIn(arr, size);
    cout << "After reversal: " << endl;
    for (int x : arr){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
