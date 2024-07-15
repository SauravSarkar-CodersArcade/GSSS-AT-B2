#include <iostream>
#include <map>
#include <list>
#include <string>
using namespace std;
int main() {
    map<string, list<string>> studentFood;
    list<string> PreranaP {"Pasta", "Kitkat", "Chicken Biryani"};
    list<string> ShreyaGS {"Biryani", "Fish", "IceCream"};
    list<string> PunyaK {"Chicken", "PaniPuri", "Jelly"};
    studentFood.insert(pair<string, list<string>>("pp", PreranaP));
    studentFood.insert(pair<string, list<string>>("sgs", ShreyaGS));
    studentFood.insert(pair<string, list<string>>("pk", PunyaK));

    for (const auto& pair : studentFood){
        cout << pair.first << " <-> ";
        for (const auto& food : pair.second){
            cout << food << " ";
        }
        cout << endl;
    }
    return 0;
}
