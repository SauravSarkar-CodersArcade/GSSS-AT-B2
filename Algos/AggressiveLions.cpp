#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &tombs, int k, int mid){
    int lionCount = 1;
    // Where will you place the first lion?
    int lastPosition = tombs[0];
    for (int i=0; i< tombs.size(); i++){
        if (tombs[i] - lastPosition >= mid){
            // Increment the lionCount
            lionCount++;
            if (lionCount == k){
                return true;
            }
            lastPosition = tombs[i];
        }
    }
    return false;
}
int maxMinDistanceOfLionsInRing(vector<int> &tombs, int k){
    sort(tombs.begin(), tombs.end());
    int s = 0;
    int mx = -1;
    for (int i=0; i<tombs.size(); i++){
        mx = max(mx, tombs[i]);
    }
    int e = mx;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if (isPossible(tombs, k, mid)){
            ans =mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    vector<int> tombs = {1,2,3};
    int maxMinDistance = maxMinDistanceOfLionsInRing(tombs, 2);
    cout << " The max minimum distance between two lions is: " << maxMinDistance << endl;
    return 0;
}
