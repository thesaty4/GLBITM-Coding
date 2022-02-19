#include<stdio.h>
void main(){
    // write a program that will print out all the notations of string type into it. For example the rotation of the word 
    // "Space" is
    // space paces acesp cesps espac
    int innerLoop=0,j=0,k;
    char ch[] = "space";
    char *outerPointer=ch,*innerPointer_1=NULL,*innerPointer_2=NULL;
    // int size = (sizeof(ch)/sizeof(ch[0]))-1;
    while(*outerPointer != '\0'){
        innerPointer_1=ch+innerLoop;
        while(*innerPointer_1!='\0'){
            printf("%c",*innerPointer_1);
            *innerPointer_1++;
        }

        innerPointer_2=ch;
        while(*innerPointer_2 != *outerPointer){
            printf("%c",*innerPointer_2);
            *innerPointer_2++;
        }
        
        printf("\n");
        *outerPointer++;
        innerLoop++;
    }
}