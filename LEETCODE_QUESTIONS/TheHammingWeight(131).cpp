/**
 * Ouestion No. 131 
 * The Hamming Weight ( The number of 1's in unsigned integer bit)
**/

#include <iostream>
using namespace std;

int main (){
    int n;
    int count = 0;
    while(n!=0){
        if(n&1){
            count = count + 1;
        }
        n= n >> 1;
    }
    return count;
}




