#include <bits/stdc++.h>
using namespace std;

void toggle(int arr[3][3], int i, int j) {
    arr[i][j] = !arr[i][j];
    if (i < 2) {
        arr[i+1][j] = !arr[i+1][j];
    }
    if (j < 2) {
        arr[i][j+1] = !arr[i][j+1];
    }
    if (i > 0) {
        arr[i-1][j] = !arr[i-1][j];
    }
    if (j > 0) {
        arr[i][j-1] = !arr[i][j-1];
    }
}

int main(){
    int grid[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    int toggleCount[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin>>toggleCount[i][j];
            if (toggleCount[i][j] % 2 == 0) {
                toggleCount[i][j] = 0;
            }
            else {
                toggleCount[i][j] = 1;
            }
        }
    }

    // for(int i=0; i<3; i++) {
    //     for (int j=0; j<3; j++) {
    //         cout<<toggleCount[i][j];
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (toggleCount[i][j] == 1) {
                toggle(grid, i, j);
            } 
        }
    }

    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}