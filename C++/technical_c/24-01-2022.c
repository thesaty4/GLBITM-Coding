#include<stdio.h>
int len(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
void swap(char* ch1,char* ch2){

    char tmp=*ch1;
    *ch1=*ch2;
    *ch2=tmp;
}
int checkAlpha(char ch){
    if(ch>='a' && ch<='z'){
        return 1;
    }
    return 0;
}

void main(){
    char str[] = "abc#dn";
    int i=0;
    int j=len(str)-1;
    printf("Before Swap : %s",str);
    while(i<j){
        if(checkAlpha(str[i]) && checkAlpha(str[j])){
            swap(&str[i],&str[j]);
            i++;j--;
        }else if(str[i]<'a' && str[i]>'z'){
            i++;
        }else if(str[j]<'a' && str[j]>'z'){
            j--;
        }
    }
    printf("\n");
    printf("After Swap : %s",str);
}