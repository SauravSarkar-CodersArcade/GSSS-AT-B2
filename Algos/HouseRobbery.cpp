#include <iostream>
#include <vector>
using namespace std;
int maxNonAdjacentSum(vector<int> &array){ // Linear Non-Adjacent Sum
    int n = array.size();
    int previous2 = 0;
    int previous1 = array[0];
    for (int i=1; i<n; i++){
        int sum = previous2 + array[i];
        int res = max(sum, previous1);
        previous2 = previous1;
        previous1 = res;
    }
    return previous1;
}
int ProfessorRobberyOfHouses(vector<int> moneyInHouses){
    int n = moneyInHouses.size();
    if ( n == 1){
        return moneyInHouses[0];
    }
    vector<int> startPart, endPart;
    for (int i=0; i<n; i++){
        if (i != n-1){
            startPart.push_back(moneyInHouses[i]);
        }
        if ( i != 0){
            endPart.push_back(moneyInHouses[i]);
        }
    }
    return max(maxNonAdjacentSum(startPart), maxNonAdjacentSum(endPart));
}
int main() {
    vector<int> arr = {2,3,5,9};
    cout << maxNonAdjacentSum(arr) << endl;
    vector<int> moneyInHouses{1,2,3,5,4};
    int max = ProfessorRobberyOfHouses(moneyInHouses);
    cout << "Professor steals -> " << max << " thousand dollars from the village."
    << endl;
    vector<int> moneyInHouses1{1,2,3,1,3,5,8,1,9};
    int max1 = ProfessorRobberyOfHouses(moneyInHouses1);
    cout << "Professor steals -> " << max1 << " thousand dollars from the village."
         << endl;
    return 0;
}
