#include<stdio.h>

struct student{
    int rollno;
    char name[40];
    float marks[5];
    float per;
};

void main(){
    // Single student
    // struct student std;
    // int sum=0;
    // printf("Enter Roll No : ");
    // scanf("%d",&std.rollno);
    // printf("Enter your name : ");
    // scanf("%s",std.name);
    // printf("Enter your 5 Subject mark : ");
    // for(int i=0;i<5;i++){
    //     scanf("%f",&std.marks[i]);
    //     sum+=std.marks[i];
    // }
    // std.per=sum/5;

    // printf("\n\nStudent Record ----");
    // printf("\nHi, %s ,",std.name);
    // printf("\nYour Roll NO is : %d",std.rollno);
    // for(int i=0;i<5;i++)
    //     printf("\nYour %d Subject Marks is : %.2f",i+1,std.marks[i]);
    // printf("\nYour and percentage is : %f",std.per);

    // Multiple Student
    struct student std[4];
    // int sum=0;
    // for(int i=0;i<4;i++){
    //     printf("\n Enter %d Student Detail ----",i+1);
    //     sum=0;
    //     printf("\nEnter Roll No : ");
    //     scanf("%d",&std[i].rollno);
    //     printf("Enter your name : ");
    //     scanf("%s",std[i].name);
    //     printf("Enter your 5 Subject mark : ");
    //     for(int i=0;i<5;i++){
    //         scanf("%f",&std[i].marks[i]);
    //         sum+=std[i].marks[i];
    //     }
    //     std[i].per=sum/5;
    // }

    // for(int i=0;i<4;i++){
    //     printf("\n\n\n\n %d Student Record ----",i+1);
    //     printf("\nHi, %s ,",std[i].name);
    //     printf("\nYour Roll NO is : %d",std[i].rollno);
    //     for(int i=0;i<5;i++)
    //         printf("\nYour %d Subject Marks is : %.2f",i+1,std[i].marks[i]);
    //     printf("\nYour and percentage is : %f",std[i].per);
    // }

    struct student std1;
    struct student std2[2];
    printf("%d",sizeof(std)); //272
    printf("\n%d",sizeof(std[1])); //68
    printf("\n%d",sizeof(std2)); //68
    printf("\n%d",sizeof(std1)); //68
}