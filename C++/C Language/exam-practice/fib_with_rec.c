#include<stdio.h>
void fibonacci(int start,int end,int limit){
    int next;
    if(limit==0){
        return;
    }else{
        next=start+end;
        printf("%d ",next);
        start=end;
        end=next;
        fibonacci(start,end,limit-1);
    }
}

int main()
{
    int num,start=0,end=1;
    scanf("%d",&num);
    if(num<2)
        printf("0");
    else{
        printf("%d %d ",start,end);
        fibonacci(start,end,num-2);
    }
    return 0;
}

