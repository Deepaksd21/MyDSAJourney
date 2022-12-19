#include <iostream>
using namespace std;

void selectionSort(vector<int>& arr,int n) {

    for(int i=0;i<n-1; i++){
        int minIndex = i;
        
        for(int j= i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                return minIndex;
            }
        }
        swap(arr[minIndex],arr[j]);
    }
}

int main(){
    int arr[5] = { 2 , 4, 3, 1, 0};

    cout << "Before implementing selection sort" << endl;
    
    cout << "After implementing selection sort" << selectionSort(arr, 5) << endl;

    return 0;

}