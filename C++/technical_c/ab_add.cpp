#include<iostream>
using namespace std;
int main(){
    int a=20,b=20;
    int carry=0;
    int sum=0;
    // int repeat=1;
    sum=a^b;
    while(b!=0){
        a=sum;
        carry=a&b;
        b=carry<<1;
        sum=a^b;
        carry=a&b;
        carry=carry<<1;

        // if(carry==0){
        //     repeat=0;
        // }
    }
    cout<<sum;
    return 0;
}