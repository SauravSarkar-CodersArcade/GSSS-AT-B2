#include <iostream>
using namespace std;
int main() {
    for (int r=0; r<6; r++){
        for (int c=0; c<7; c++){
            if (r==5 && c%3!=0 || r==4 && c%3==0 ||
            c - r == 3 || r+c == 3){
                cout << " * ";
            }else{
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}
