#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> stateLanguages;
    stateLanguages.insert(
            pair<string, string>("Karnataka", "Kannada"));
    stateLanguages.insert(
            pair<string, string>("Goa", "Konkani"));
    stateLanguages["Kerala"] = "Malayalam";
//    stateLanguages.erase("Goa");
//    stateLanguages.clear();
    for (auto it : stateLanguages){
        cout << "State: " << it.first << " Language: " << it.second << endl;
    }
    cout << endl;
    return 0;
}
