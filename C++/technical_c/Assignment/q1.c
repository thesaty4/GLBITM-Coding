#include<stdio.h>
int hasVowel(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'){
            return 1;
        }
        i++;
    }
    return 0;
}
void main(){
    // From a given list of words, print those words which are not carrying any vowel in them
    char str[]="Ths bnp is an paragraph";
    int i=0,k=0;
    char temp[1000];
    int size=sizeof(str)/sizeof(str[0]);
    while(str[i] != '\0'){
       if(str[i]==32 || i==size-2){
           temp[k]='\0';
        //    print("%d",hasVowel(str))
           if(!hasVowel(temp))
                printf("%s \n",temp);
           k=0;
       }else{
           temp[k]=str[i];
            k++;
       }
       i++;
    }
}