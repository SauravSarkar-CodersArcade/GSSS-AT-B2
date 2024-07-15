#include <iostream>
using namespace std;
// User-defined datatype
template<typename T>
void genericSwap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 10;
    int b = 20;
    cout << a << " - " << b << endl;
    genericSwap(a,b);
    cout << a << " - " << b << endl;
    char c = 'a';
    char d = 'b';
    cout << c << " - " << d << endl;
    genericSwap(c,d);
    cout << c << " - " << d << endl;
    return 0;
}
