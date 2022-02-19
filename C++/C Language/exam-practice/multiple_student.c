#include<stdio.h>
struct Student{
    // data members
    int rollNo;
    char name[20];
    float marks[5];
};
void print(struct Student* std,float* avg); //prototype

void main(){
    struct Student std[2];
    // std[0], std[1]
    float avg[2],sum=0;

    for(int k=0;k<2;k++){
        avg[k]=0;
        printf("\nEnter %d student record ",k+1);
        printf("\nEnter Roll No : ");
        scanf("%d",&std[k].rollNo);

        printf("Enter Name : ");
        scanf("%s",std[k].name);

        for(int i=0;i<5;i++){
            printf("Enter Subject %d mark : ",i+1);
            scanf("%f",&std[k].marks[i]);
            sum+=std[k].marks[i];
        }
        avg[k]=sum/5;
        // call referece
    }


    for(int k=0;k<2;k++){
        print(&std[k],&avg[k]);
    }
}

// defination of print
void print(struct Student* std,float* avg){
    printf("\n Your Record is here----\n");
    printf("Your Roll No : %d",std->rollNo);
    printf("\nYour Name No : %s",std->name);
    printf("\nAverage  : %.2f",*avg);
}