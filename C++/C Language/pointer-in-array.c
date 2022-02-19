#include<stdio.h>
void main(){
    int num,*p;
    printf("Enter number : ");
    scanf("%d",&num);
    p=&num;
    printf("%d",*p); //value of this address
    *p=50;
    printf("%d",num);
}