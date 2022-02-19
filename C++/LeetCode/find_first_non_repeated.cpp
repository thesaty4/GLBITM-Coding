#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    string s="satya";
    map<int,int> frq;
    for(int i=0;i<s.size();i++){
        frq[s[i]]++;
    }

    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(frq[s[i]]==1){flag=false;cout<<i;break;}
    }
    if(flag)
    cout<<"Not Repeated";
}