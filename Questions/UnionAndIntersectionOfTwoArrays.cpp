#include <iostream>
using namespace std;
void printUnionAndIntersection
(int a1[], int n1, int a2[], int n2){
    int i=0, j=0;
    cout << "Union: ";
    while (i < n1 && j < n2){
        if (a1[i] < a2[j]){
            cout << a1[i++] << " ";
        }else if (a2[j] < a1[i]){
            cout << a2[j++] << " ";
        }else{
            cout << a1[i++] << " ";
            j++;
        }
    }
    // Extra elements if any
    while (i < n1){
        cout << a1[i++] << " ";
    }
    while (j < n2){
        cout << a2[j++] << " ";
    }
    cout << endl;
    cout << "Intersection: ";
    // Reset the counter
    i = 0;
    j = 0;
    while (i < n1 && j < n2){
        if (a1[i] < a2[j]){
            i++;
        }else if (a2[j] < a1[i]){
            j++;
        }else{
            cout << a1[i++] << " ";
            j++;
        }
    }
    cout << endl;
}
int main() {
    int arr1[] = {2,5,8,10,12};
    int arr2[] = {4,8,12,16,20};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printUnionAndIntersection(arr1, n1, arr2, n2);
    return 0;
}
