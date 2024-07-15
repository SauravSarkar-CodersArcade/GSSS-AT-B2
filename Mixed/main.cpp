#include <iostream>
using namespace std;
template<typename X>
void GenericSwap(X& a, X& b){
    X temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 10;
    int b = 20;
    bool b1 = true;
    bool b2 = false;
    cout << a << " - " << b << endl;
    GenericSwap(a, b);
    cout << a << " - " << b << endl;
    cout << b1 << " - " << b2 << endl;
    GenericSwap(b1, b2);
    cout << b1 << " - " << b2 << endl;
    return 0;
}
