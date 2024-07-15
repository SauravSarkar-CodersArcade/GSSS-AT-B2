//#include <bits/stdc++.h>
//using namespace std;
//
//int partition(vector<int> &arr, int low, int high) {
//    int pivot = arr[low];
//    int i = low;
//    int j = high;
//
//    while (i < j) {
//        while (arr[i] <= pivot && i <= high - 1) {
//            i++;
//        }
//
//        while (arr[j] > pivot && j >= low + 1) {
//            j--;
//        }
//        if (i < j) swap(arr[i], arr[j]);
//    }
//    swap(arr[low], arr[j]);
//    return j;
//}
//
//void qs(vector<int> &arr, int low, int high) {
//    if (low < high) {
//        int pIndex = partition(arr, low, high);
//        qs(arr, low, pIndex - 1);
//        qs(arr, pIndex + 1, high);
//    }
//}
//
//vector<int> quickSort(vector<int> arr) {
//    qs(arr, 0, arr.size() - 1);
//    return arr;
//}
//
//int main()
//{
//    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
//    int n = arr.size();
//    cout << "Before Using quick Sort: " << endl;
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    arr = quickSort(arr);
//    cout << "After Using quick sort: " << "\n";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << "\n";
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(int arr[], int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

void quickSort(int arr[], int n) {
    qs(arr, 0, n - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before using Quick Sort:" << endl;
    printArray(arr, n);

    quickSort(arr, n);

    cout << "After using Quick Sort:" << endl;
    printArray(arr, n);

    return 0;
}
