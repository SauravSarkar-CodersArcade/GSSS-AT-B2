#include <iostream>
using namespace std;
/*
 * Return Type
 * no of parameters
 */
class OverLoading { // Same class
public:
    void add(int a, int b){
        cout << a+b << endl;
    }
    void add(int a, int b, int c){
        cout << a+b+c << endl;
    }
    void add(double a, double b){
        cout << a+b << endl;
    }
};
int main() {
    OverLoading obj;
    obj.add(1,2);
    obj.add(1,2,3);
    obj.add(1.2, 3.4);
    return 0;
}
