#include <iostream>
#include <queue>
using namespace std;

int main(){
    // max heap
    priority_queue<int> maxi;
    // min heap
    priority_queue<int , vector<int> , greater<int> > mini;

    maxi.push(3);
    maxi.push(6);
    maxi.push(9);
    maxi.push(5);
    maxi.push(4);

    cout<<"Size ---> "<< maxi.size() << endl;
    int n=maxi.size();
    for (int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    } cout << endl;

    mini.push(10);
    mini.push(6);
    mini.push(1);
    mini.push(5);
    mini.push(11);

    int m=mini.size();
    for (int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    } cout << endl;

    cout << "Check if is empty ? " << mini.empty()<< endl;
}