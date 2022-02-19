#include<stdio.h>
#include<conio.h>
void main(){
    int a=5,b=4;
    int sum=a^b;
    int c;
    while (b!=0)
    {
        /* code */
        a=sum;
        c=a&b;
        sum=a^b;
        c=a&b;
        // c<<1;
    }
    printf("%d",sum);
    
}