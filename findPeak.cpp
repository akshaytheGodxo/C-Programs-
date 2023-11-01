#include <iostream>
using namespace std;

int Peak(int arr[] , int size){
    int s = 0 , ans = -1;
    int e = size-1;
    int m = s + (e-s)/2;
    while (s<e)
    {
        if (arr[m] < arr[m+1]){
            s = m + 1;
        }
        else {
            e = m;
            ans = m;
        }

        m = s + (e-s)/2;
    }
    return arr[ans];
}
int main()
{
    int arr[7] = {1 , 2 , 3 , 4 , 5 ,3 ,2};
    int z = Peak(arr , 7);

    cout << "Peak value is : " << z;
    
}