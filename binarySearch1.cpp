#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    while (start <= end){
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2 , 4 , 6 , 8 , 10 , 12};
    int odd[7] = {1 , 3 , 5 , 7 , 9 , 11 , 13};
    int index1 = binarySearch(even , 6 , 10);
    int index2 = binarySearch(odd , 7 , 3);
    cout << "the index is : " << index1 << endl;
    cout << "the index is : " << index2 << endl;
}