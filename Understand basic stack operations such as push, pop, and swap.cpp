#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> stack1;
    stack1.push("Rahul");
    stack1.push("Virat");
    stack1.push("Sachin");
    stack1.push("Rohit");

    stack<string> stack2;
    stack2.push("Amit");
    stack2.push("Andy");
    stack2.push("Smith");
    stack2.push("Andrew");

    stack1.swap(stack2);

    while(!stack1.empty()){
        cout << stack1.top() << "\t";
        stack1.pop();
    }
    cout << "\n";
    while(!stack2.empty()){
        cout << stack2.top() << "\t";
        stack2.pop();
    }

    return 0;
}
