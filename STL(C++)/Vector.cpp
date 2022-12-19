#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1);
    vector<int> b(5,2);
    vector<int> last(b);
    cout << "Print Vector a : " << endl;
    for(int i:a){
        cout << i << " ";
    } cout << endl;

    cout << "Print Vector b : " << endl;
    for(int i:b){
        cout << i << " ";
    } cout << endl;

    cout << "Capacity ---> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity ---> " << v.capacity() << endl;

    v.push_back(10);
    cout << "Capacity ---> " << v.capacity() << endl;

    v.push_back(100);
    cout << "Capacity ---> " << v.capacity() << endl;
  
    v.push_back(1001);
    cout << "Capacity ---> " << v.capacity() << endl; 

    cout << "Size ---> " << v.size() << endl;
    cout << "Index at 3 ---> " << v.at(2) << endl;

    cout << "Element at front ---> " << v.front() << endl;
    cout << "Element at back --->  " << v.back() << endl;

    cout << "Before pop : " << endl;
    for(int i:v){
        cout << i << " ";
    } cout << endl;
   
    v.pop_back();

    cout << "After pop : " << endl;
    for(int i:v){
        cout << i << " ";
    } cout << endl;

    cout << "Before clearing : " << v.size() << endl;
    v.clear();
    cout << "After clearing : " << v.size() << endl;

}