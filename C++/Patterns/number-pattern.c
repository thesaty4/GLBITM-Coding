#include<stdio.h>
#include<conio.h>
// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 
void main(){
    int n=9,i,j,sp;
    for(i=1;i<=n;i++){
        for(sp=1;sp<=i-1;sp++)
        printf("%d ",n-sp+1);

        for(j=1;j<=n-i+1;j++)
        printf("%d ",n-i+1);

        for(j=2;j<=n-i+1;j++)
        printf("%d ",n-i+1);

        for(sp=i-1;sp>=1;sp--)
        printf("%d ",n-sp+1);

        printf("\n");
    }

    for(i=n-1;i>=1;i--){
        for(sp=1;sp<=i-1;sp++)
        printf("%d ",n-sp+1);

        for(j=1;j<=n-i+1;j++)
        printf("%d ",n-i+1);

        for(j=2;j<=n-i+1;j++)
        printf("%d ",n-i+1);

        for(sp=i-1;sp>=1;sp--)
        printf("%d ",n-sp+1);

        printf("\n");
    }

}