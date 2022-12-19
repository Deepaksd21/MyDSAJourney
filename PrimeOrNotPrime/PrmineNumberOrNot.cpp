// With For Loop

#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    bool isPrime =  1;

    for(int i=2; i<n; i++){
        if(n%2 == 0) {
            isPrime = 0;
        break;
        }
    }
     if(isPrime==0) {
        cout << n << " " << " Not a Prime Number." << endl;
      } else {
        cout << n << " " << " is a Prime Number." << endl;
      }
}


// With While Loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int i = 2;
//     while(i < n) {
//         // Check if divisible
//         if(n%i==0) {
//             cout << "NOT PRIME for " << i << endl;
//         } else {
//             cout << "IS PRIME for " << i << endl;
//         }
//     i++;
//     }
// }

