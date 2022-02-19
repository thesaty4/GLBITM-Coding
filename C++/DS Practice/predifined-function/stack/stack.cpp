#include<iostream>
#include<stack>
#include<vector>
#include<list>
using namespace std;
int main(){
    // stack<int> var;
    // var.push(100);
    // var.push(10);
    // var.push(50);
    // cout<<"Size : "<<var.size()<<endl;
    // cout<<"top : "<<var.top()<<endl;
    // cout<<"isEmpty : "<<var.empty(); // return 0 if not empty

    // list class
    stack<int, vector<int>> stck; // make a stack using a vector container
    stck.push(10);
    stck.push(90);
    cout<<"top : "<<stck.top()<<endl; // fetch top value
    return 0;
}