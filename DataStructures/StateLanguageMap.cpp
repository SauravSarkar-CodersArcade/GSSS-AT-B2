#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<string, string> stateStats;
    stateStats.insert(pair<string, string>("Karnataka", "Kannada"));
    stateStats.insert(pair<string, string>("AndhraPradesh", "Telugu"));
    stateStats.insert(pair<string, string>("Maharashtra", "Marathi"));
    stateStats.insert(pair<string, string>("WestBengal", "Bengali"));
    stateStats.insert(pair<string, string>("TamilNadu", "Tamil"));
    // Insert a new key:value pair in the map
    stateStats["Assam"] = "Assamese";
    // Delete the entire map
//    stateStats.clear();
    // Size
    cout << stateStats.size() << endl;
    for (auto it : stateStats){
        cout << it.first << " - " << it.second << endl;
    }
    return 0;
}
