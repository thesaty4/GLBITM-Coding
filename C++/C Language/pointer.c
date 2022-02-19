#include<stdio.h>
void main(){

    int x=10;
    int *ip; // pointer declaretion
    ip=&x; // assignment value to pointer

    // int *ptr=NULL; 
    printf("\nThe address of x is : %x\n", &x);
    printf("The address of *ip is : %x\n", &ip);
    printf("The value of x is : %d\n", x);
    printf("The value of x is : %d\n", *ip);

    *ip = 99;
    printf("Over written value is : %d",*ip);

    
}