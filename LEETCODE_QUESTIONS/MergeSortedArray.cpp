#include <iostream>
#include<vector>
using namespace std;

int merge(int arr1[] , int n , int arr2[], int m, int arr3[]){
    int i=0 , j=0;
    int k=0;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++]=arr1[i++];       
        } else {
             arr3[k++]=arr2[j++];   
        }
    }
    // Copy first array k element
    while(i<n){
        arr3[k++]=arr1[i++]; 
    }
    // Copy remaining second array element
    while(j<m){
        arr2[k++]=arr2[j++]; 
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr1[5] = { 2 , 4 , 6 , 8, 10};
    int arr2[3] = { 3 , 5 , 7};

    int arr3[8] = {0};

    merge(arr1 , 5 , arr2, 3 , arr3);

    print(arr3, 8);

    return 0;
}