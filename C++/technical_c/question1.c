#include<stdio.h>
#include<conio.h>
void main(){
    int x=1,y=1;
    for(;y;printf("\n%d %d",x,y))
    // <--------- right to left
    y=x++<=1;
}