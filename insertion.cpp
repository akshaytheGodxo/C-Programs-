// This program is used to sort array with Insertion Sorting

#include <iostream>
using namespace std;

void insertionSort(int *arr , int size){
    for (int i = 0;i < size;i++){
        int temp = arr[i];
        int j = i-1;
        for (;j >= 0 ;j--){
            if (arr[j] > temp){
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
        }
        arr[j+1] = temp;

    }
}

int main(){
    int arr[5] = {5 , 1 , 2  , 3 , 4};
    insertionSort(arr , 5);
    
    // Printing The array
    for (int i = 0;i < 5;i++){
        cout << arr[i] << " ";
    }
    return 0;

}