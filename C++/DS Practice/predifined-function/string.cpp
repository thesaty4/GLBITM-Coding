#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="first string";
    string str2="this is second string";
    // cout<<"Before Assign : "<<str<<endl;
    // str.assign(str2);
    // cout<<"After Assign : "<<str<<endl; //override the value

    cout<<"Before Change : "<<str<<endl;
    str.insert(0,"new | "); //insert at 0 index
    cout<<"After Change : "<<str<<endl;
    // int pos=str.find("h"); //if not available return -1
    // try{
    //     cout<<"try block :"<<str.find("this is me");
    // }catch(exception){
    //     cout<<"catch block";
    // }
    // cout<<str.find("find"); //if not available return -1
    // cout<<pos2;
    // cout<<str;
    // cout<<str+str2;
    return 0;
}