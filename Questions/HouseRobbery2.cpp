#include <iostream>
#include <vector>
using namespace std;
int maxNonAdjacentSum(vector<int>& array){
    int n = array.size();
    int p2 = 0;
    int p1 = array[0];
    for (int i=1; i<n; i++){
        int sum = p2 + array[i];
        int result = max(sum, p1);
        p2 = p1;
        p1 = result;
    }
    return p1;
}
int ProfessorRobberyOfHouses(vector<int> moneyInHouses){
    int n = moneyInHouses.size();
    if (n == 1){
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
    vector<int> moneyInHouses{1,2,3,1,3,5,8,1,9};
    int maxMoney = ProfessorRobberyOfHouses(moneyInHouses);
    cout << "Professor steals/robs: " << maxMoney << endl;
    return 0;
}
