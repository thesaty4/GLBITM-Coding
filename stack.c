#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int *arr;
int top=-1;
int size;
void display(){
    if(top<size-1) printf("Stack is empty ! \n");
    else
        for(int i=top;i>=0;i--)
        printf("|  %d \n",arr[i]);
}

int push(int elm){
    if(top==size-1) return -1;
    else arr[++top]=elm;
    return 1;
}
int isEmpty(){
    if(top<size-1) return 1;
    else return -1;
}
int top_elm(){
    if(top<size-1) return -1;
    else return arr[top];
}

int pop(){
    if(top==-1) return -1;
    else {
        printf("Popped element is : %d \n",arr[top--]);
        return 1;
    }

}
void main(){
    int choice;
    int newSize;
    printf("Enter the size of stack : ");
    scanf("%d",&size);
    arr=calloc(sizeof(int),size);
    while(1){
        system("CLS");
        printf("1. PUSH \n");
        printf("2. POP \n");
        printf("3. TOP \n");
        printf("4. DISPLAY \n");
        printf("5. Size Increase \n");
        printf("6. EXIT \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(isEmpty()==1){
                    printf("Enter the element : ");
                    int elem;
                    scanf("%d",&elem);
                    if(push(elem)==-1){
                        printf("Stack is Full !\n");system("pause");
                    }else{
                        system("pause");
                        continue;
                    }
                }else
                    printf("Stack is not empty ! \n");
                    system("pause");
                
                break;
            
            case 2:
                if(pop()==-1)
                    printf("Stack is emtpy !\n");
                
                system("pause");
                break;  

            case 3: if(top_elm()==-1){
                        printf("Stack haven't any element yet !\n");
                    }else{
                        printf("Top Element is : %d \n",top_elm());
                    }
                    system("pause");
                    break;
            case 4: display();
                system("pause");
                break;
            case 5: 
                printf("Enter New size of Stack : ");
                scanf("%d",&newSize);
                if(newSize<size){
                    printf("Too less size of stack ...\n");
                }else{
                    realloc(arr,newSize);
                    printf("Size increased !\n");
                }
                system("pause");
            break;

            case 6: exit(0);
            default:printf("Opps ! Invalid Input...\n");
            system("pause");
            break;             
        }

    }
 

}