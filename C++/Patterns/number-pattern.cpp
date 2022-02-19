#include<iostream>
using namespace std;
// 1
// 121
// 12321
// 1234321
// 123454321
// 12345654321
int main(){
    int N=6;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++)
             cout<<j;
        
        for(int j=i-1;j>=1;j--)
            cout<<j;
        cout<<endl;
    }
    return 0;
}