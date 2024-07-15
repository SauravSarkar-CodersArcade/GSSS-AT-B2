#include<iostream>
using namespace std;
struct Mobile {
    string name;
    string brand;
};
void merge(Mobile arr[], int s, int mid, int e){
    int i, j, k;
    int n1 = mid - s + 1;
    int n2 = e - mid;
    Mobile L[n1], R[n2];
    for (i = 0; i<n1; i++){
        L[i] = arr[s + i]; // s+0, s+1, s+n1-1
    }
    for (j = 0; j<n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    i = j = 0;
    k = s;
    while (i < n1 && j < n2){
        if (L[i].name < R[j].name){
            arr[k++] = L[i++];
        }
        else{
            arr[k++] = R[j++];
        }
    }
    while (i < n1){
        arr[k++] = L[i++];
    }
    while (j < n2){
        arr[k++] = R[j++];
    }

}
void mergeSort(Mobile arr[], int s, int e){
    if (s < e){
        int mid = (s+e)/2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);
        merge(arr, s, mid, e);
    }
}
int main(){
    int n;
    Mobile mobiles[25];
    cout << "Enter the number of mobiles:" << endl;
    cin >> n;
    for (int i=0; i<n; i++){
        cout << "Enter Mobile Name:\n";
        cin >> mobiles[i].name;
        cout << "Enter Mobile Brand:\n";
        cin >> mobiles[i].brand;
    }
    mergeSort(mobiles, 0, n-1);
    cout << "\nMobiles in alphabetical order are:\n";
    for (int i=0; i<n; i++){
        cout << "Name: " << mobiles[i].name << endl;
        cout << "Brand: " << mobiles[i].brand << endl;
    }
    return 0;
}