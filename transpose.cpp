#include <bits/stdc++.h>

using namespace std;

int main(){
    int size1 = 4;
    int size2 = 4;
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for (int i = 0;i < size1;i++){
        for (int j = 0;j < size2;j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "---Transpose---" << endl;

    for (int i = 0;i < size2;i++){
        for (int j = 0;j < size1;j++){
            cout << arr[j][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}