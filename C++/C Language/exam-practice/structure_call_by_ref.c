#include<stdio.h>
struct Student{
    // data members
    int rollNo;
    char name[20];
    float marks[5];
};
void print(struct Student* std,float* avg); //prototype

void main(){
    struct Student std;
    float avg,sum=0;
    printf("Enter Roll No : ");
    scanf("%d",&std.rollNo);

    printf("Enter Name : ");
    scanf("%s",std.name);

    for(int i=0;i<5;i++){
        printf("Enter Subject %d mark : ",i+1);
        scanf("%f",&std.marks[i]);
        sum+=std.marks[i];
    }
    avg=sum/5;
    // call referece
    print(&std,&avg);
}

// defination of print
void print(struct Student* std,float* avg){
    printf("\n Your Record is here----\n");
    printf("Your Roll No : %d",std->rollNo);
    printf("\nYour Name No : %s",std->name);
    printf("\nAverage  : %.2f",*avg);
}