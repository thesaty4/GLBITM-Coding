#include<iostream>
using namespace std;
int main(){
    // int a = 10;
    // int *ptr = 0;
    // *ptr = a;
    // cout<<a<<endl;
    // Error 

    // int b = 10;
    // int *a = &b;
    // // address of b
    // cout<<endl;
    // cout<<&b<<endl;
    // cout<<a<<endl;
    // // cout<<&(a);
    // cout<<endl;


    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout << *ptr << endl; //b

    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout  << a << "  " << *c << endl; // 7 Gargabe

    // int a = 7;
    // int *c = &a;
    // cout  << c << endl;
    // c = c + 3;
    // cout  << c << endl;



    // int a[5];
    // int *c;
    // cout << sizeof(a) << ' ' << sizeof(c); // 20 4
 

    // int a[] = {1, 2, 3, 4};
    // cout << *(a) << " " << *(a+1); // 1 2

    // int a[6] = {1, 2, 3};
    // cout << (a + 2)<<endl; //3
    // cout << &a[2];

    // int a[] = {1, 2, 3, 4};
    // int *p = a++; // l value error
    // cout << *p << endl;

    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout << *arr + 9; // 13


    // char b[] = "xyz";
    // char *c = &b[0];
    // cout << c << endl; //xyz

    // char s[]= "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0]; // h h 

    // char arr[20];
    // int i;
    // for(i = 0; i < 10; i++) {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = '\0';
    // cout << arr; // ABCDEFGHIJ

    //   char *ptr; 
    // char Str[] = "abcdefg";
    // ptr = Str;
    // ptr += 5;
    // cout << ptr; //fg


    // int numbers[5];
    // int * p;
    // p = numbers; 
    // *p = 10;
    // p = &numbers[2]; 
    // *p = 20;
    // p--; 
    // *p = 30;
    // p = numbers + 3;
    // *p = 40;
    // p = numbers;
    // *(p+4) = 50;
    // for (int n=0; n<5; n++) {
    //     cout << numbers[n] << ","; // 10,30,20,40,50
    // } 


//   char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] << *(st)+i << *(i+st) << i[st]; //A65AAB66BBC67CCD68DD
//   }

//   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<*ptr2<<" ";
//   cout<< ptr2 - ptr1;  // 90.5 3









    return 0;

}