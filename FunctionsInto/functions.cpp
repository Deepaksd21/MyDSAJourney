#include <iostream>
using namespace std;

// int main(){

//     int a , b;
//     cout << "Enter the value of a: " << endl;
//     cin >> a;

//     cout << "Enter the value of b: " << endl;
//     cin >> b;

//     int ans = 1;
//     for (int i=1;i<=b;i++){
//         ans = ans * a;
//     }
//     cout << "The answer is :" << ans << endl;
// }



/**
 *  !FUNCTIONS FOR CALCULATING POWER OF NUMBERS - pow(a,b)
 * 
 **/

// int power(int x, int y){
//     int ans = 1;

//     for(int i=1;i<=y;i++){
//         ans = ans * x;
//     }
//     return ans;
// }

// int main(){
//     int a,b;
//     cin >> a >> b;

//     int answer = power(a,b);

//     cout << "The answer after powers is : "  << answer << endl;
// }

/**
 *  ! FUNCTIONS FOR CALCULATING nCr - [ n! / r! * (n-r)! ]
 * 
 **/

// int factorial(int n){
//     int fact = 1;
//     for (int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n, int r){

//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return num/denom;
// }

// int main(){
//   int n,r;
//   cin >> n >> r;

//   cout << "The nCr result is : " << nCr(n,r) << endl;
// }


/**
 * ! FUNCTIONS TO PRINT n GIVEN NUMBERS
 **/

// void printCounting(int n){
//     int ans = 1;
//     for(int i=1;i<=n;i++){
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int n;
//     cin >> n;

//     printCounting(n);

//     return 0;
// }



