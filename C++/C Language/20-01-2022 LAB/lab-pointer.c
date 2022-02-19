#include<stdio.h>
void main(){
    char a[] = {"We will teach you how to write anoptimum code in the c programming language"};
    char *p;
    p=a;
    int size=sizeof(a)/sizeof(a[0]);
    int i=0,counter=0;
    while(i!=size-1){
        if(*p=='e' || *p=='E')
            counter++;
        *p++;
        i++;
    }
    printf("Number of time 'e' repeate : %d",counter);
}