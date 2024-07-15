#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int main() {
    // return_type (*ptr) (t1,t2...,tn) = function_name;
    int(*funcPtr)(int, int) = add;
    cout << add(1,2) << endl;
    cout << funcPtr(1, 2) << endl;
    return 0;
}
