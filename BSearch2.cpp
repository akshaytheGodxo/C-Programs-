#include <iostream>
#include <algorithm>

using namespace std;

int BSearch (int arr[] , int size , int key) {
    int start = 0;
    int end = size-1;
    int mid = (start+end) / 2;
    while (start <= end){
        if (key == arr[mid]){
            return mid;
        }
        if (key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = (start+end)/2;
    }
   return -1;
}
int main(){
    int n;
    cout << "Input size: ";
    cin >> n;
    int arr[n];
    
    cout << "Input values:" << endl;
    for (int i=0;i<n;i++){
        cin >> arr[i];

    }
    int key;
    cout << "Enter key : ";
    cin >> key;
    cout << endl;
    sort(arr , arr+n);
    int ans = BSearch(arr , n , key);
    cout << "The index of " << key << " is : ";
    cout << key << endl;
}