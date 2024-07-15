#include <iostream>
using namespace std;
void printNumber(const int* numberPtr){
    cout << *numberPtr << endl;
}
void printLetter(const char* charPtr){
    cout << *charPtr << endl;
}
void printVoidPointer(void* ptr, char type){
    switch(type){
        case 'i':cout <<*((int*)ptr) << endl;
            break;
        case 'c':cout <<*((char*)ptr)<<endl;
            break;
    }
}
int main() {
    int number = 5;
    char letter = 'a';
//    printNumber(&number);
//    printLetter(&letter);
    printVoidPointer(&number, 'i');
    printVoidPointer(&letter, 'c');
    return 0;
}
