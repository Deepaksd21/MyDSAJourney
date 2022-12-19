#include <iostream>
#include <array>
using namespace std;

int main(){
    int basic[4] = {2 , 4 , 5 , 3};

    array<int,4> a={4,5,6,3};

    cout << "Element at 3rd Index : " << a[3] << endl;

    cout << "Is array empty ? " << a.at(2) << endl;
    cout << "Empty or not ? " << a.empty() << endl;

    cout << "First Element : " << a.front() << endl;
    cout << "Last Element : " << a.back() << endl;   
    
}