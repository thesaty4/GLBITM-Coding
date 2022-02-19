#include<stdio.h>
#include<conio.h>
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// **      **
// ***    ***
// ****  ****
// **********

void main(){
    int n=5,i,j,sp;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++)
            printf("*");

        for(sp=1;sp<=i-1;sp++)
            printf("  ");

        for(j=1;j<=n-i+1;j++)
            printf("*");
        printf("\n");
    }

    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i+1;j++)
            printf("*");

        for(sp=1;sp<=i-1;sp++)
            printf("  ");

        for(j=1;j<=n-i+1;j++)
            printf("*");
        printf("\n");
    }
}