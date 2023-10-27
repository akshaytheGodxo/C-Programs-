#include <iostream>
using namespace std;
// Program To Sort an array With Merge Sort : TIME COMPLEXITY : O(logN)
void merge(int *arr , int s , int e){

    int mid = (e + s)/2;
    // length of left array
    int len1 = (mid - s )+ 1;
    //length of right array
    int len2 =  e - mid;
    // making a new array of length = len1
    int *left = new int[len1];
    // making another array of length = len2
    int *right = new int[len2];

    // here comes the copying part :D
    // We will copy the data of the old array into our new 2 sub arrays
    int k = s;
    // copying for left part
    for (int i = 0;i < len1;i++){
        left[i] = arr[k++];
    }

    k = mid + 1; // since the right array starts from mid+1 value of the main array
    // copying for right part
    for (int i = 0;i < len2;i++){
        right[i] = arr[k++];
    }
    // here comes the sorting part :D
    k = s; 
    // initialising two different values with 0
    int index1 = 0; // for left part
    int index2 = 0; // for right part
    while (index1 < len1 && index2 < len2){
        if (left[index1] < right[index2]){
            arr[k++] = left[index1++];
        }
        else{
            arr[k++] = right[index2++];
        }
    }

    // also checking them seperately since they could be of different length 
    // for left part
    while (index1 < len1){
        arr[k++] = left[index1++];
    }
    while (index2 < len2){
        arr[k++] = right[index2++];
    }
}

void mergeSort(int *arr , int s , int e){
    // base-case
    if (s >= e){

        return ;
    }
    
    int mid = (s + e) /2;
    // left part
    mergeSort(arr , s , mid);
    // right part
    mergeSort(arr , mid + 1 , e);

    // merging arrays
    merge(arr , s , e);
}

int main(){
    int arr[5] = {2 , 6 , 1 , 9 , 4};
    mergeSort(arr , 0 , 4);
    for (int i = 0;i < 5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}