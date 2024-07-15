#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    vector<int> rotatedArray(n);
    // Normalize the k value to be withing the array length
    k = k % n;
    // Rotate the array to the left
    for (int i=0; i<n; i++){
        // Left Rotation
        rotatedArray[i] = arr[(i+k) % n];
        // Right Rotation
        // rotatedArray[(i+k) % n] = arr[i];
    }
    return rotatedArray;
}
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    // Write your code here.
    vector<int> ksl;
    sort(arr.begin(), arr.end());
    if (k-1 < arr.size()){
        ksl.push_back(arr[k-1]);
    }
    if ((arr.size() - k) >= 0){
        ksl.push_back(arr[arr.size()-k]);
    }
    return ksl;
}
int main() {

    return 0;
}
