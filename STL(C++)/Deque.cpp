#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> d;

    d.push_back(10);
    d.push_front(100);

    // cout << "After pushing element : " << endl; 

    // for(int i: d){
    //     cout<<i<<" ";
    // } cout << endl;

    // d.pop_back();
    // d.pop_front();

    // cout << "After popping element : " << endl;

    //  for(int i:d){
    //     cout<<i<<" ";
    // } cout << endl;

    cout << "Size ---> " << d.size() << endl;
    cout << "Index at 1 ---> " << d.at(1) << endl;

    cout << "Element at front ---> " << d.front() << endl;
    cout << "Element at back --->  " << d.back() << endl;

    cout << "Before Erasing ---> " << d.size() << endl;
    d.erase(d.begin() , d.begin() + 1);
    cout << "After Erasing ---> " << d.size() << endl;

    for(int i:d){
        cout<<i<<endl;
    } 

   
}