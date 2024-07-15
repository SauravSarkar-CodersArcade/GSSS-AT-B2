#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> arr, int n, int m, int mid){
    int workerCount = 1;
    int durationSum = 0;
    for (int i=0; i<n; i++){
        if (durationSum + arr[i] <=  mid){
            durationSum += arr[i];
        }else{
            workerCount++;
            if (workerCount > m || arr[i] > mid){
                return false;
            }
            durationSum = arr[i];
        }
    }
    return true;
}
int assignTasks(vector<int> arr, int n, int m){
    int s = 0;
    int sum = 0;
    int ans = -1;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    while (s <= e){
        if (isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    vector<int> arr = {12,34,67,90};

    int minMaxDuration = assignTasks(arr, 4, 2);
    cout << minMaxDuration << endl;
    return 0;
}
