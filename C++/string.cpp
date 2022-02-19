#include<iostream>
using namespace std;
int main(){
// Input: PROGRAM 
// Output:
// G$ GR$ GRA$ GRAM$  GRAMP$ GRAMPR$ GRAMPRO$
    string s="PROGRAM";
    string half="";
    for(int h=s.length()/2;h<s.length();h++)
        half+=s[h];

    for(int j=s.length()/2;j<s.length();j++){
          for(int k=s.length()/2;k<=j;k++)
            cout<<s[k];
        cout<<"$"<<" ";
    }

    for(int k=0;k<s.length()/2;k++){
        cout<<half<<s[k]<<"$"<<" ";
        half+=s[k];
    }

    return 0;
}