#include<stdio.h>
void main(){
    // write a program that will print out all the notations of string type into it. For example the rotation of the word 
    // "Space" is
    // space paces acesp cesps espac
    int i=1,j=0,k;
    char ch[] = "space";
    int size = sizeof(ch)/sizeof(ch[0]);
    for(i=0;i<size-1;i++){
        for(j=i;j<size-1;j++)
            printf("%c",ch[j]);

        k=0;
        while(k<=i-1){
            printf("%c",ch[k]);
            k++;
        }

        printf("\n");
    }
}