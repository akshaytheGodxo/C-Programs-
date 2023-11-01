#include <iostream>
using namespace std;

int minValue(int arr[] , int size){
    int min = arr[0];
    for (int i = 1;i < size;i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int maxValue(int arr[] , int size){
    int max = arr[0];
    for (int i = 1;i < size;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

bool isPossible(int arr[] , int size ,int count, int mid){
    int cow = 1;
    int distance = arr[0];
    for (int i = 0;i < size;i++){
        if (arr[i] - distance >= mid){
            cow++;
            if (cow == count){
                return true;
            }
            distance = arr[i];
        }
    }
    return false;
}

int binarySearch(int arr[] , int size){
    int start = 0;
    int end = size;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start <= end){
        if (isPossible(arr , size , 2 , mid)){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}



int main(){
    int arr[5] = {4 , 2 , 1 , 3 , 6};
    int min = minValue(arr , 5);
    int max = maxValue(arr , 5);
    cout << "The min distance is ..... " << binarySearch(arr , 5);
}