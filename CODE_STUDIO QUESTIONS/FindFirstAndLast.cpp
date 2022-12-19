#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans= -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e=mid-1;
        } else if (key > arr[mid]){
            s=mid+1;
        } else if(key < arr[mid]){
            e=mid-1;
        } 
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s=mid+1;
        } else if(key > arr[mid]) {
            s=mid+1;
        } else if(key < arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){

    int arr[10] = {1,3,5,5,5,5,5,5,6,7};
 
    cout << "The first Occurence is in index : " <<  firstOcc(arr, 10,   5) << endl;
    cout << "The Last Occurence is in index : " <<  lastOcc(arr, 10, 5) << endl; 

    return 0;
}