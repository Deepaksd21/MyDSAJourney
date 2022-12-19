#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s=mid+1;
        } else {
            e = mid;
        }
        mid=s+(e-s)/2;
    } 
    return s;
}

int main(){

    int arr[10] = { 8 , 10 , 17 , 19 , 25, 1 , 5 , 7, 8, 11 };

    cout<<"Pivot element of the array is : " << getPivot(arr,10)<< endl;
}