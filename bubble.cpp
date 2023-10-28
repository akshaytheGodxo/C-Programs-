// This program will sort an array using bubbleSort method

#include <iostream>
using namespace std;

void bubbleSort(int * arr , int size)
{
    for (int i = 0;i < size - 1;i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main()
{
    int arr[5] = {5 , 1 , 2  , 3 , 4};
    bubbleSort(arr , 5);
    // Printing The array
    for (int i = 0;i < 5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}