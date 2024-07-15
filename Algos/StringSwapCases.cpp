#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// TCS, NINJA, NQT
// Convert this string into lower case & uppercase by using logic
// Not using built-in functions
int main() {
    string str = "PrIyaNka";
    // Uppercase: PRIYANKA
    for (int i=0; i<str.size(); i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    cout << str << endl;
    // Lowercase: priyanka
    for (int i=0; i<str.size(); i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    cout << str << endl;
    // Using Built-in functions? // transform

    string s = "PuNya";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}
