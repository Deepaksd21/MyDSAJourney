#include <iostream>
using namespace std;

// int main(){
//     int n=15;

//     int a=0;
//     int b=1;
//     cout << a << " " << b << " ";
//     for (int i=1; i<=n;i++){
//         int nextNum = a+b;
//         cout<< nextNum << " ";
//         a=b;
//         b=nextNum;
//     }
// }


int main(){
    int n;
    cin >> "Enter the number :" >> n;

    int a=0;
    int b=1;

    cout << a << " " << b << " ";
    for (int i=1;i<=n;i++){
        int nextNumber = a+b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
}
