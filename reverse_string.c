#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
char *arr;
int top=-1;
int size;
void display(){
    if(top<size-1) printf("Stack is empty ! \n");
    else
        for(int i=top;i>=0;i--)
        printf("|  %c \n",arr[i]);
}

void push(char elm){
    arr[++top]=elm;
}
int isEmpty(){
    if(top==-1) return 1;
    else return 0;
}
char top_elm(){
    if(top==-1) return '0';
    return arr[top];
}

void pop(){
    top--;
}

int strSize(char *ch){
    int c=0;
    while(*ch!='\0') {c++;ch++;}
    return c;
}

void main(){
    int choice;
    int newSize;
    char exp[100];
    printf("Enter String : ");
    gets(exp);
    // scanf("%s",exp);

    size=strSize(exp);
    arr=calloc(sizeof(int),size);
    // printf("size : %d",size);

    int i=0;
    printf("Before REverse : ");
    while(top!=size-1){
        printf("%c",exp[i]);
        push(exp[i]);
        i++;
    }

    printf("\nAfter REverse : ");
    while(top!=-1){
        printf("%c",exp[top]);
        top--;
    }
}