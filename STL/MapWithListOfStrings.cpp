#include <iostream>
#include <map>
#include <list>
#include <string>
using namespace std;

int main() {
    map<string, list<string>> studentFavFood;
    list<string> divya {"biryani","bisi bele bath","kabab"};
    list<string> aishwarya {"pizza", "masala dosa", "french fries"};
    list<string> pavithra {"paneer butter masala", "golguppa", "gobi manchurian" };
    studentFavFood.insert(
            pair<string, list<string>>("Divya", divya));
    studentFavFood.insert(
            pair<string, list<string>>("Aishwarya", aishwarya));
    studentFavFood.insert(
            pair<string, list<string>>("Pavithra", pavithra));
    for (const auto &it : studentFavFood){
        cout << "Name: " << it.first << " -> ";
        for (const auto &food : it.second){
            cout << food << ",";
        }
        cout << endl;
    }
    return 0;
}
