#include<stdio.h>
void rc(int n){
    if(n==0)
        return 1;
    rc(n-1);
    rc(n-1);
    printf("%d",n);
}

void main()
{
    int n=3;
    rc(n);
}