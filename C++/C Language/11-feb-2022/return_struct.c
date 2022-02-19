#include<stdio.h>

struct Emp{
    int id;
    char name[20];
    float basicpay,hra,da,total;
};

struct Emp cal(struct Emp obj); //function prototype
void display(struct Emp obj);
void main(){
   struct Emp obj;
   printf("Enter Emplyee Details : ");
   printf("\nEnter Employee id : ");
   scanf("%d",&obj.id);

   printf("Enter Name : ");
   scanf("%s",obj.name);

   printf("Enter Employee Basic Salary : ");
   scanf("%f",&obj.basicpay);

   obj=cal(obj);// calling method by passing struct variable
   display(obj);
}

// fuction defination
struct Emp cal(struct Emp ep){  //function with argument and with return prototype
                                // passing argument and return struct type
    float hra,da,total;
    if(ep.basicpay>45500) {
        ep.hra=ep.basicpay*34/100; //34%
        ep.da=ep.basicpay*55/100;
    }else{
        ep.hra=ep.basicpay*42/100; //34%
        ep.da=ep.basicpay*58/100;
    }

    ep.total=ep.basicpay+hra+da;
    
    return ep;
}

void display(struct Emp obj){
    printf("\n Emp ID           : %d  ",obj.id);
    printf("\n Emp Name         : %s ",obj.name);
    printf("\n Emp Basic Pay    : %.2f",obj.basicpay);
    printf("\n Emp H.R.A        : %.2f",obj.hra);
    printf("\n Emp D.A          : %.2f",obj.da);
    printf("\n Emp Total Salary : %.2f",obj.total);
}