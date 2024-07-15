#include <iostream>
using namespace std;
// Function to check if a cell is safe to traverse
bool isPathSafe(int ** arr, int x, int y, int n){
    if (x < n && y < n && arr[x][y] == 1){
        return true;
    }
    return false;
}
// Function to find the path for the rat in the maze
// If path exists we will display the path
// If it doesn't we will say : "No Solution Exists"
bool ratInAMaze(int** arr, int x, int y, int n, int** resArray){
    // Base case:
    // If the rat reaches the destination
    // Update the cell to 1 & return true
    if ( x == n-1 && y == n-1){
        resArray[x][y] = 1;
        return true;
    }
    // Check if the current position is safe to move
    if (isPathSafe(arr, x, y, n)){
        resArray[x][y] = 1; // Mark the cell as 1
        // Move right and check is a path exists
        if (ratInAMaze(arr, x+1, y, n, resArray)){
            return true;
        }
        // Move down to check if a path exists
        if (ratInAMaze(arr, x, y+1, n, resArray)){
            return true;
        }
        resArray[x][y] = 0; // Backtracking
        // No path found
        return false;
    }
    return false;
}
int main() {
    // Input array
    int n;
    cout << "Enter the maze array size: (nxn):" << endl;
    cin >> n;
    int ** arr = new int * [n];
    cout << "Enter the maze array elements: (0 or 1)" << endl;
    for (int i=0; i<n; i++){
        arr[i] = new int [n];
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    // Create a resultant array and initialize it to all zeroes
    int ** resArr = new int * [n];
    for (int i=0; i<n; i++){
        resArr[i] = new int [n];
        for (int j=0; j<n; j++){
            resArr[i][j] = 0;
        }
    }
    if (ratInAMaze(arr, 0,0,n,resArr)){
        // If true, print the resultant array
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout << resArr[i][j] << " ";
            }cout << endl;
        }
    }else{
        cout << "No solution exists." << endl;
    }
    return 0;
}
