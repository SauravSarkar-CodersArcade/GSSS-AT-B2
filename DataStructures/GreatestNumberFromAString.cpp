#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "98242576";
    sort(str.begin(), str.end(), greater<>());
    cout << str << endl;
    return 0;
}
