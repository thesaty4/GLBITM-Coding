#include<stdio.h>
int fact(int num){
    int f;
    //base condtion
    if(num==1)
        return num;
    return num*fact(num-1);
}
void main(){
    int num=5;
    printf("%d ",fact(num));
}