// Input: n = 3
// Output: 
// 1*2*3*10*11*12  
// --4*5*8*9       
// ----6*7         
#include<iostream>
using namespace std;
int main(){
    int n=3,i,j,sp,v=1,last=n*n;
    for(i=1;i<=n;i++){
        for(sp=1;sp<=(i-1)*2;sp++)
            cout<<"-";

        for(j=1;j<=n-i+1;j++,v++)
            cout<<v<<"*";

        for(j=1;j<=n-i+1;j++){
            cout<<last+j;
            if(j!=n-i+1)
            cout<<"*";
        }
        last-=j-2;

        cout<<endl;
    }
}