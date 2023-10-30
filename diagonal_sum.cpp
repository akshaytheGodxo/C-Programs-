#include <bits/stdc++.h>

using namespace std;

// Right Diagonal Sum
int rightDiagonalSum(int arr[][3], int size1 , int size2){
    int sum = 0;
    for (int i = 0;i < size1;i++){
        for (int j = 0;j < size2;j++){
            if (i != j){
                if (j > i){
                    sum = sum + arr[i][j];
                } 
            }
        }
    }
    return sum;

}

// Left Diagonal Sum

int leftDiagonalSum(int arr[][3] , int size1 , int size2){
    int sum = 0;
    for (int i = 0;i < size1;i++){
        for (int j = 0;j < size2;j++){
            if (i != j){
                if (j < i){
                    sum = sum + arr[i][j];
                } 
            }
        }
    }
    return sum;
}


int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int ans1 = rightDiagonalSum(arr , 3 , 3);
    int ans2 = leftDiagonalSum(arr , 3 , 3);
    cout << "Right Diagonal Sum: " << ans1;
    cout << endl;
    cout << "Left Diagonal Sum: " << ans2;
    return 0;

}