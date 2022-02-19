#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5,6};
    int i=0;
    printf("Accessing array using index method a[i] : ");
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    printf("\nAccessing array using index method i[a] : ");
    for(i=0;i<6;i++){
        printf("%d ",i[arr]);
    }
    printf("\nAccessing array using base address *(a+i) : ");
    for(i=0;i<6;i++){
        printf("%d ",*(arr+i));
    }

    // printf("\nAccessing array using base address *(a+i) : ");
    // int *p=arr;
    // while(i<6){
    //     printf("%d ",*p);
    //     p++;
    //     i++;
    // }

    // printf("\nAccessing array using base address &a+i : ");
    // int *ptr = arr;
    // while(i<6){
    //     printf("\n%u ",&ptr+i);
    //     // printf("%u ",(arr+i));
    //     i++;
    // }
    printf("\n");
    // size of array = 6*4 = 24, where base address of array=10 
    printf("%u ",&arr);   // 10
    printf("%u ",&arr+0); // 10+0
    printf("%u ",&arr+1); // 10 + sizeof(arr)
    printf("%u ",&arr+2); // 10 + sizeof(arr) + sizeof(arr)
    printf("%u ",&arr+3); // 10 + sizeof(arr) + sizeof(arr) + sizeof(arr)

    printf("\n");
    //  where base address of array=10 
    printf("%u ",arr);   // 10
    printf("%u ",arr+0); // 10 + 0byte
    printf("%u ",arr+1); // 10 + 4byte
    printf("%u ",arr+2); // 10 + 4byte + 4byte
    printf("%u ",arr+3); // 10 + 4byte + 4byte + 4byte

}