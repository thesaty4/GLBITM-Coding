#include<iostream>
using namespace std;
int main(){
    //2000,500,200,100,50,20,10,5,2,1
    int amt=1203,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11;
    // cout<<"ENTER YOUR AMOUNT >> ";
    // cin>>amt;
    n1=amt/2000;
    amt%=2000;

    n2=amt/500;
    amt%=500;

    n3=amt/200;
    amt%=200;

    n4=amt/100;
    amt%=100;

    n5=amt/50;
    amt%=50;

    n6=amt/20;
    amt%=20;

    n7=amt/10;
    amt%=10;

    n8=amt/5;
    amt%=5;

    n9=amt/2;
    amt%=2;

    n10=amt/1;
    amt%=1;
    
    cout<<"2000 Note : "<<n1<<endl;
    cout<<"500 Note : "<<n2<<endl;
    cout<<"200 Note : "<<n3<<endl;
    cout<<"100 Note : "<<n4<<endl;
    cout<<"50 Note : "<<n5<<endl;
    cout<<"20 Note : "<<n6<<endl;
    cout<<"10 Note : "<<n7<<endl;
    cout<<"5 Note : "<<n8<<endl;
    cout<<"2 Note : "<<n9<<endl;
    cout<<"1 Note : "<<n10<<endl;
    
    return 0;
}