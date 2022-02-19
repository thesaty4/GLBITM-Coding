#include<stdlib.h>
#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number of block you want to create : ");
    scanf("%d",&n);
    // int* memory = calloc(n,sizeof(int));
    int* memory =(int*) calloc(n,sizeof(int)); //best programing practice

    printf("%d",memory);
    if (memory == NULL){
        printf("Oops ! Memory creation problem");
        exit(0);
    }
    // Default Values of each block 0 0 0 0 0 0 0 0 0 0
    for(int i=0;i<n;i++){
        printf("%d ",*(memory+i));
    }
}