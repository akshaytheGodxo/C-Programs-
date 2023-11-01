#include <iostream>
using namespace std;
int findPivot(int arr[] , int size){
    int s=0;
    int e=size-1;
    int m=s+(e-s)/2;
    while(s<e){
        if (arr[m]>arr[0])
        {
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return s;
}

int main(){
    int arr[7] = {10,17,19,21,1,3,4};
    cout << "Pivot point is at : " << findPivot(arr , 7);
    cout << endl;
}