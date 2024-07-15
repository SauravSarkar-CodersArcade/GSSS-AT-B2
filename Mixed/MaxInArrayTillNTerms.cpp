#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size:" << endl;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int mx = -9999;
    for (int i=0; i<n; i++){
        mx = max(mx, a[i]);
        cout << mx << "  ";
    }
    return 0;
}
