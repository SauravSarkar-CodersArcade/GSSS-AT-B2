#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> ans;
    for (int i=0; i<arr.size(); i++){
        for (int j=i+1; j<arr.size(); j++){
            if (arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main() {
    vector<int> arr = {2,4,3,6,1,5}; // 1 6 2 5 3 4
    int s = 7;
    vector<vector<int>> result = pairSum(arr, s);
    for (const vector<int> &pair : result){
        cout << pair[0] << " " << pair[1] << endl;
    }
    return 0;
}
