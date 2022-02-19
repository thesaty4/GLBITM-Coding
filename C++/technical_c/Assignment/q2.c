// Clss positions: in a class of 'n' students, the marks are given in an array calculate the 
// position of each student in class
#include<stdio.h>
void main(){
    int stu=7;
    int max=0;
    int marks[7]={56,45,33,66,3,4,7};
    int newMark[7]={56,45,33,66,3,4,7};
    int ranks[7]={0};
    int rank=0;
    // for(int i=0;i<stu;i++){
        // do insertion sort
        for(int j=1;j<stu;j++){
            int key=marks[j];
            int pointer=j-1;
            while(pointer >= 0 && marks[pointer]>key) {
                marks[pointer+1]=marks[pointer];
                --pointer;
            }
            marks[pointer+1]=key;
        }
    // }

    for(int i=0;i<stu;i++){
        printf("%d ",marks[i]);
    }

}