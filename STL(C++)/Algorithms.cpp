#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    cout<<"Binary search ----> " << binary_search(v.begin() , v.end() , 10 ) << endl;

    cout<<"Lower bound ----> " << lower_bound(v.begin() , v.end(), 8) - v.begin() << endl;
    cout<<"Upper bound ----> " << upper_bound(v.begin() , v.end(), 8) - v.begin() << endl;

    int a = 6 ;
    int b = 5 ;

    cout <<"Max ----> " << max(a,b) << endl;
    cout <<"Min ----> " << min(a,b) << endl;
     
    swap(a,b);

    cout <<"Value of a is : ----> " << a << endl;
    cout <<"Value of b is : ----> " << b << endl;

    string new_string = "abcde";
    reverse(new_string.begin(), new_string.end());
    cout << "String after reversing ----> " << new_string << endl;

    rotate(v.begin(), v.begin()+3,v.end());

    cout << "After rotating ----> "<< endl;
    for(int i:v){
        cout << i << endl;
    } cout << endl;

    sort(v.begin(), v.end());

    cout << "After sorting ----> "<< endl;
    for(int i:v){
        cout << i << endl;
    } cout << endl;

}