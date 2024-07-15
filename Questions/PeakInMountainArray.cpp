#include <iostream>
#include <vector>
using namespace std;
class GeorgeInJungle {
public:
    static int peakIndexInMountainArray(vector<int>& arr){
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e){
            if (arr[mid] < arr[mid - 1]){
                s = mid + 1;
            }else {
                // Important in this case
                // Because we are finding the peak index
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};
int main() {
    vector<int> mountain = {0,10,5,2};
    int peakIndex =
            GeorgeInJungle::peakIndexInMountainArray(mountain);
    cout << "Peak index of the mountain as observed by George's device is: "
    << peakIndex << endl;
    return 0;
}
