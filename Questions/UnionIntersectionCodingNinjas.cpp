#include <bits/stdc++.h>
#include <iostream>
using namespace std;
pair < int , int > findSimilarity
(vector < int > arr1, vector < int > arr2, int n, int m)
{
    set<int> set1(arr1.begin(), arr1.end());
    set<int> set2(arr2.begin(), arr2.end());
    set<int> intersectionSet;
    for (int num : set1){
        if (set2.find(num) != set2.end()){
            intersectionSet.insert(num);
        }
    }
    set<int> unionSet(set1.begin(), set1.end());
    unionSet.insert(set2.begin(), set2.end());
    return {intersectionSet.size(), unionSet.size()};
}

int main() {
    return 0;
}
