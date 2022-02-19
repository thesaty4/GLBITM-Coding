#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="anagram";
    string t="nagram";
    // cout<<s.find('l')<<endl; // return garbage value
    // cout<<s.find('n')<<endl; //return first index of given value
    // // for(int i=0;i<t.length();i++)
    // //         if(!s.find(t[i]))
    // //             cout<<""
    // //     return true;

    // for(int i=0;i<t.length();i++)
    //         if(s.find(t[i]) > s.length() && t.length()<s.length())
    //             return false;
        // return true;

    int freq[26]={0};
    for(char ch:s) freq[ch-'a']++;
    for(char ch:t) freq[ch-'a']--;
    for(int i=0;i<26;i++)
        if(freq[i]!=0){
            cout<<"False";
            break;
        }
    cout<<"true";
    return 0;
}