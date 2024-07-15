#include <iostream>
#include <memory>
using namespace std;

int main() {
    // The memory is auto deleted in a unique pointer
    // Used in faster and high-end applications
    unique_ptr<int> unPtr1 = make_unique<int>(25);
    cout << *unPtr1 << endl;
    unique_ptr<int> unPtr2 = move(unPtr1);
    cout << *unPtr1 << endl;
    return 0;
}
