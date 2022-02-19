#include<stdio.h>
void main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int sp=0;sp<i-1;sp++)
            printf("%d",n-sp);
        
        for(int j=i;j<2*n-i;j++)
            printf("%d",n-i+1);
        
        for(int sp=i-1;sp>=0;sp--)
            printf("%d",n-sp);
        printf("\n");
    }

    for(int i=n-1;i>=1;i--){
        for(int sp=0;sp<i-1;sp++)
            printf("%d",n-sp);
        
        for(int j=i;j<2*n-i;j++)
            printf("%d",n-i+1);
        
        for(int sp=i-1;sp>=0;sp--)
            printf("%d",n-sp);
        printf("\n");
    }
}