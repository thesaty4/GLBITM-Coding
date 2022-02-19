#include<iostream>
using namespace std;
int main(){
    int N=4,i,sp;
    for(i=1;i<=N/2;i++){
        for(sp=1;sp<=i-1;sp++)
            cout<<" ";
        cout<<"*";

        for(sp=N-2*i+1;sp>=1;sp--)
            cout<<" ";

        cout<<"*";
        cout<<endl;
    }

    for(i=1;i<=N/2;i++){
        for(sp=1;sp<=N/2;sp++)
        cout<<" ";
        cout<<"*";
        cout<<endl;
    }
    return 0;
}