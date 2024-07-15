#include <iostream>
using namespace std;
#include <vector>

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    int s = 0;
    int e = row * col - 1;
    int mid = s + (e-s)/2;
    while (s <= e){
        int element = matrix[mid/col][mid%col];
        if (element == target){
            return true;
        }
        if (element < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

vector<int> findCommonElements
(vector<int>& a1, vector<int>& a2, vector<int>& a3){
    vector<int> common;
    for (int i : a1){
        if (find(a2.begin(), a2.end(),i) != a2.end() &&
            find(a3.begin(), a3.end(),i) != a3.end()){
        common.push_back(i);
        }
    }
    return common;
}
int main() {
    vector<int> a = {1,2,3,4};
    vector<int> b = {4,5,6,7};
    vector<int> c = {7,6,5,4};
    vector<int> result = findCommonElements(a,b,c);
    for (int commEle : result){
        cout << commEle << " ";
    }
    cout << endl;
    return 0;
}
