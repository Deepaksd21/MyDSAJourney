#include <iostream> 
using namespace std;

int binarySearch(int arr[] , int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2 ;

    while (start <= end) {
         if(arr[mid] == key){
            return mid;
         }

        if(key > arr[mid]){
            start = mid+1;
        } else {
            end = mid-1;
        }
      mid = start + (end - start)/2 ;

     }
     return -1;
}

int main() {

   int even[6] = { 1 , 5 , 7 , 66, 78,  99 } ;
   int odd[5] = { 11 , 56 , 77 , 86, 99 } ;
 
    int evenIndex = binarySearch(even, 6 , 99);
    
    cout << "The index of key 99 is : " << evenIndex << endl ;

    int oddIndex = binarySearch(odd, 5 , 99);

    cout << "The index of key 99 is : " << oddIndex << endl ;
 
   return 0; 
}