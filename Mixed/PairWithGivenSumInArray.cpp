#include <iostream>
using namespace std;
bool checkPair(int A[], int size, int x){
    for (int i=0; i<(size-1); i++){
        for (int j=(i+1); j<size; j++){
            if (A[i] + A[j] == x){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int A[] = {0, -1, 2, -3, 1};
    int x = -2;
    int size = sizeof(A) / sizeof(A[0]);
    if (checkPair(A, size, x)){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    return 0;
}