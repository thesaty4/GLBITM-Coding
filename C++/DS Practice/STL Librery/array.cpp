#include<iostream>
#include<array>
using namespace std;
int main(){
    cout<<"Make array as integer"<<endl;
    array<int,4> a={1,2,3,4};
    int size=a.size();
    cout<<"Element at 2nd number : "<<a.at(2)<<endl; // data at index number two 3
    cout<<"Front element : "<<a.front()<<endl; // it will return front element
    cout<<"Front element : "<<a.back()<<endl; // it will return front element
    cout<<"Check array is empty or not : "<<a.empty()<<endl; // it will check wheater array is empty or full return 0=No, 1=Yes
    
    cout<<endl;
    cout<<"Make array as string"<<endl;
    array<string,4> str={"first element","2nd Element","3rd Element","4th Element"};
    int strSize=str.size();
    cout<<"Element at 2nd number : "<<str.at(2)<<endl; // data at index number two 3
    cout<<"Front element : "<<str.front()<<endl; // it will return front element
    cout<<"Front element : "<<str.back()<<endl; // it will return front element
    cout<<"Check array is empty or not : "<<str.empty()<<endl; // it will check wheater array is empty or full return 0=No, 1=Yes
    
    // Iteration
    for(int i:a){
        cout<<i;
    }
    return 0;
}