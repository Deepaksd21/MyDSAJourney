#include <iostream>
using namespace std;

void printArray(int arr[] , int size){

for(int i=0; i<size ; i++){
    cout << arr[i] << " ";
}
cout << endl << "Array printed." << endl;
}

void printCharArray(char arr[] , int size){

for(int i=0; i<size ; i++){
    cout << arr[i] << " ";
}
cout << endl << "Array printed." << endl;
}


/**
 * 
 * ! MAXIMUM AND MINIMUN VALUES IN ARRAY
 * 
**/

int getMax(int num[], int n){
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        maxi = max(maxi , num[i]);
    }
        return maxi;
}

int getMin(int num[], int n){
    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        mini = min(mini , num[i]);    
    }
    return mini;
}

// int main() {
//     int size;
//     cin >> size;

//     int num[100];

//     for(int i=0;i<size;i++){
//         cin >> num[i];
//     }

//     cout <<" Maximum value is "<<getMax(num , size)<< endl;
//     cout <<" Minumum value is "<<getMin(num , size)<< endl;
// }


/**
 * 
 * ! PRINT SUM OF ALL ELEMENTS  IN ARRAY
 * 
**/

int getSum(int arr[], int n){
 int sum=0;
    for(int i=0;i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

// int main(){
//     int n;
//     cin >> n;

//     int arr[10];

//     for(int i=0;i<n; i++){
//         cin >>  arr[i];
//     }
//     cout << "The sum of the array is : " << getSum(arr , n) << endl;
// }     


/**
 * !! INTRODUCTION OF ARRAYS
 * 

// int main() {
//     int number[15];

//     int first[10] = { 5,7,11};
//     int second[15] = { 1, 2 , 4 ,5 , 6};
//     int n = 10;
//     printArray(first , 10);
//     printArray(second , 15);

//     char character[5] = {'a','b','c','d','e'};
//     cout << character[4] << endl;

//     printCharArray(character , 5);
    
//     return 0;
// }

**/

