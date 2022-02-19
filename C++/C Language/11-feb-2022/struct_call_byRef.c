#include<stdio.h>

struct Emp{
    int id;
    char name[20];
    float basicpay;
};

void cal(struct Emp* obj); //function prototype

void main(){
   struct Emp obj;
   printf("Enter Emplyee Details : ");
   printf("\nEnter Employee id : ");
   scanf("%d",&obj.id);

   printf("Enter Name : ");
   scanf("%s",obj.name);

   printf("Enter Employee Basic Salary : ");
   scanf("%f",&obj.basicpay);

   cal(&obj);// calling method by passing struct variable
}

// fuction defination
void cal(struct Emp* ep){
    float hra,da,total;
    if(ep->basicpay>45500) {
        hra=ep->basicpay*34/100; //34%
        da=ep->basicpay*55/100;
    }else{
        hra=ep->basicpay*42/100; //34%
        da=ep->basicpay*58/100;
    }

    total=ep->basicpay+hra+da;
    printf("\n Emp ID           : %d  ",ep->id);
    printf("\n Emp Name         : %s ",ep->name);
    printf("\n Emp Basic Pay    : %.2f",ep->basicpay);
    printf("\n Emp H.R.A        : %.2f",hra);
    printf("\n Emp D.A          : %.2f",da);
    printf("\n Emp Total Salary : %.2f",total);
}