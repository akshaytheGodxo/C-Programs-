#include <iostream>
using namespace std;

int findPivot(int arr[] , int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while (start < end)
    {
        if (arr[mid] > arr[0])
        {
            start = mid+1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    } 
    return start;
}   

int binarySearch(int arr[] , int s , int e , int k)
{
    int start = s;
    int end = e;
    int key = k;
    int mid = start + (end - start)/2;
    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}



int main()
{
    int arr[6] = {10,17,19,1,2,3};
    int pivot = findPivot(arr , 6);
    //cout << "Pivot Element is at : " << findPivot(arr , 6) << "which is : "<<arr[findPivot(arr , 6)] ;

    int key;
    cout << "Input key: ";
    cin >> key;
    cout << endl;
    if (key >= arr[pivot] && key <= arr[5])
    {
        cout << "Value is at : " << binarySearch(arr , pivot , 5 , key);
        cout << endl;
    }
    else {
        cout << "Value is at : " << binarySearch(arr , 0 , pivot-1 , key);
    }
    cout << endl;
}