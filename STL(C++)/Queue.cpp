#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("John");
    q.push("Dick");
    q.push("Harry");
    q.push("Mike");

    cout<<"Size Before Pop ----> "<<q.size()<<endl;
    cout<<"First Element Before Pop ----> "<<q.front()<<endl;
    cout<<"Before ----> "<<endl;
   
    q.pop();
    cout<<"Size After Pop ----> "<<q.size()<<endl;
    cout<<"First Element After Pop ----> "<<q.front()<<endl;
    cout<<"After ----> "<<endl;
    
}