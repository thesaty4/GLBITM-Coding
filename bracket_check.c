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
    printf("Enter Your expression : ");
    scanf("%s",exp);

    size=strSize(exp);
    arr=calloc(sizeof(int),size);
    // printf("size : %d",size);

    for(int i=0;i<=size;i++){
        if(exp[i]=='[' || exp[i] == '{' || exp[i] == '('){
            push(exp[i]);
        }
        else if(top==-1 && (exp[i]==']' || exp[i] == '}' || exp[i] == ')')){
            // printf("Invalid Expresion ! \n");
            // exit(0);
            push(exp[i]);
            break;
        }else if(exp[i]==']' || exp[i] == '}' || exp[i] == ')'){
            char ch=top_elm();
            if(!isEmpty()){
                if(exp[i]==']' && ch=='['){
                    pop();
                }
                if(exp[i]=='}' && ch=='{'){

                    pop();
                }
                if(exp[i]==')' && ch=='('){
                    pop();
                }else{
                    break;
                    // printf("Invalid Expression ! ");
                    // exit(0);
                }
            }
        }
    }

    // printf("%d",top);
    if(top==-1){
        printf("Valid Expression !\n ");
    }else{
        printf("Invalid Expresion !\n ");
    }
}