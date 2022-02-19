#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter Memory size : ");
    scanf("%d",&n);
    int* ptr = (int*) malloc(n*sizeof(int));
    // int* ptr = malloc(n*sizeof(int)); //default return type is void
    // printf("%d",ptr);
    if (ptr == NULL){
        printf("Memory Not allocated !");
        exit(0);
    }   
    printf("Memory Created successfully SIZE: %d byte, %d bit",n*sizeof(int),n*sizeof(int)*1024);
    printf("\n");
    // malloc default contain -- garbage value
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}