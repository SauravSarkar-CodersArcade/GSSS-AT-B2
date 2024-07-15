#include <iostream>
using namespace std;
int maxCakes(int n){
    int cakes = (n * (n+1))/2 + 1;
    return cakes;
}
int maxRegions(int n){
    int regions = (n * (n+1))/2 + 1;
    return regions;
}
int main() {
    int n;
    cin >> n;
    cout << "Max regions for n straight lines is " <<
    maxRegions(n) << endl;
    cout << "Max cakes for n straight cuts is " <<
         maxCakes(n) << endl;
    return 0;
}
