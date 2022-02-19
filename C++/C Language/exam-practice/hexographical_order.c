#include<stdio.h>
#include<string.h>
#define MAX 4
void main(){
    char str[MAX][10],temp[10];
    for(int i=0;i<4;i++)
        gets(str[i]);
    
    for(int i=0;i<MAX;i++){
        for(int j=i+1;j<MAX;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("\n");
    for(int i=0;i<MAX;i++){
        puts(str[i]);
    }
}