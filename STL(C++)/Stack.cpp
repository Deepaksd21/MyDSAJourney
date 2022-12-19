#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Ram");
    s.push("Laxman");
    s.push("Arjun");
    s.push("John");

    cout <<"Element at top before pop ----> " << s.top() << endl;
    s.pop();
    cout <<"Element at top after pop ----> " << s.top() << endl;
    s.pop();
    cout <<"Element at top after again popping ----> " << s.top() << endl;

    cout <<"Size of stack ----> " << s.size() << endl;

    cout <<"Stack empty or not ? ----> " << s.empty() << endl;
}