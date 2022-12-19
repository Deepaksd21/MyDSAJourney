// Convert any number into binary equivalent
/* 
result = (result *10) + digit; (Same Sequence)
result = (digit * 10^i) + result; (Reverse Number)
*/

// MUST REVISE !!!!!!!!!!!!!!!!!!!!

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n!=0){
        int bit = n & 1;

        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl ;
}
