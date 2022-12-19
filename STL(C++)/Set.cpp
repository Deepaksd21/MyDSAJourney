#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(12);
    s.insert(12);
    s.insert(12);
    s.insert(10);
    s.insert(10);
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.insert(4);

    for(auto i : s){
        cout << i <<endl;
    }cout<<endl; 

    s.erase(s.begin());

     for(auto i : s){
        cout << i <<endl;
    }cout<<endl; 
 
    cout<<"Count of 8 ----> "<<s.count(8)<<endl;
    cout<<"Count of 14 ----> "<<s.count(14)<<endl;
}