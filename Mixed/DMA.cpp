#include <iostream>
using namespace std;
namespace gsss {
    int a = 10;
}
int main() {
    cout << gsss::a;
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
//    int numbers[size]; // Not a good practise ?
    // Because application can crash or stop abruptly
    int* myArray = new int[size];
    for (int i=0; i<size; i++){
        cout << "Array[" << i << "]->";
        cin >> myArray[i];
    }
    for (int i=0; i<size; i++){
        cout << *(myArray+i) << " ";
    }
    delete[]myArray;
    myArray = NULL;
    system("pause>0");
}
