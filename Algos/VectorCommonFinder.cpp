#include <iostream>
#include <vector>
using namespace std;
/*
 * Problem Statement: TCS/Accenture:
Given three vectors of integer data type, find the common elements in the
three vectors by demonstrating the use of STL:vector built-in functions.
 */
vector<int> findTheCommonElement(vector<int>& a, vector<int>& b, vector<int>& c){
    vector<int> common_elements;
    for (int i : a){
        if (find(b.begin(), b.end(), i)!=b.end()
        && find(c.begin(), c.end(), i)!=c.end()){
            common_elements.push_back(i);
        }
    }
    return common_elements;
}
int main() {
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,3,4,5};
    vector<int> c = {1,2,3,4,5};

    vector<int> result = findTheCommonElement(a, b, c);

    for (int common : result){
        cout << common << " ";
    }
    cout << endl;
    return 0;
}
