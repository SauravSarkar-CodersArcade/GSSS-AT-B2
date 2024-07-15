#include <iostream>
#include <vector>
using namespace std;
vector<int> find_common(const vector<int>& a1, const vector<int>& a2,
                        const vector<int>& a3){
    vector<int> common;
    // find(), push_back()
    for (int i : a1) {
        if (find(a2.begin(), a2.end(),i) != a2.end()
        && find(a3.begin(), a3.end(), i) != a3.end()){
            common.push_back(i);
        }
    }
    return common;
}
int main() {
    vector<int> a1 = {1,2,3,4,5};
    vector<int> a2 = {3,4,5,4,7};
    vector<int> a3 = {6,7,8,4,3};
    vector<int> res = find_common(a1, a2, a3);
    for (int num : res){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
