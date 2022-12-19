#include <iostream>
#include<list>
using namespace std;

int main() {

    list<int> l;

    l.push_back(10);
    l.push_front(100);

    for(int i:l){
        cout<<i<<endl;
    } 

    cout << "Element at front ---> " <<l.front() << endl;
    cout << "Element at back --->  " <<l.back() << endl;

    cout << "Before Erasing ---> " <<l.size() << endl;
    l.erase(l.begin());
    cout << "After Erasing ---> " <<l.size() << endl;

    for(int i:l){
        cout<<i<<endl;
    } 
   
}