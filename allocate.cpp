#include <iostream>
using namespace std;

bool isPossible(int arr[] , int n , int m , int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i=0;i<n;i++){
        if (pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid){
                return false;
            }
            //so right here we are basically transfering the rest of the arr[i] to second student since it couldnt fit in the first student :D
            
            pageSum = 0;
            pageSum = arr[i];      
        }

    }
    return true;
}

int binarySearch(int arr[] , int size , int m)
{
    int start = 0;
    int sum = 0;
    for (int i=0;i < size;i++){
        sum += arr[i];
    }
    int ans = -1;
    int end = sum;

    int mid = start + (end - start)/2;

    // In this while loop we are calculating the value of mid and putting it in the isPossible() func , to check and see if it returns true or not 

    while (start <= end){
        if (isPossible(arr , size , m , mid)){
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int arr[4] = {100,200,300,400};
    cout << "And the min value is dadadum dadadum tadada ...... => " << binarySearch(arr , 4 , 2);
    cout << endl;

}