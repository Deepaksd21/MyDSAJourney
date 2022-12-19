#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int, string> m;

    m[1]="Deepak";
    m[5]="Deiepin";
    m[3]="Dipin";
    m[2]="DipinXT";
    

    cout<<"Before Erase ----> " << endl;
    // for(auto i:m){
    //     cout << i.first<<" "<<i.second<<endl;
    // }

    cout << "Finding element 5 ---> " << m.count(5) << endl;
    cout << "Finding element -10 ---> " << m.count(-10) << endl;


    m.erase(3);
    cout<<"After Erase ----> " << endl;

//   for(auto i:m){
//         cout <<i.first<<" "<<i.second<<endl;
//     }

}