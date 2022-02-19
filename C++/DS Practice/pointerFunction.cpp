#include<iostream>
using namespace std;
void changeSign(int *p){
  *p = (*p)  *  -1;
}

void fun(int a[]) {
    cout << a[0] << " ";
}

void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}



void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

void increment(int **p){
  (**p)++;
}

int main(){
//   int a = 10;
//   changeSign(&a);
//   cout << a << endl; //-10



    // int a[] = {1, 2, 3, 4};
    // fun(a + 1);
    // cout << a[0]; // 2 1


    // int a = 10;
    // square(&a);
    // cout << a << endl; // 10 




//    char *x = "geeksquiz";
//    char *y = "geeksforgeeks";
//    char *t;
//    swap(x, y);
//    cout<<x << " "<<y;
//    t = x;
//    x = y;
//    y = t; 
//    cout<<" "<<x<< " "<<y;
// //    output : geeksquiz geeksforgeeks geeksforgeeks geeksquiz



// int x = 5;
//   P(&x);
//   cout<<x;


// int a = 10;
// int *p = &a;
// int **q = &p;
// int b = 20;
// *q = &b;
// (*p)++;
// cout << a << " " << b << endl;

//  int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a); //19
//     return 0;

//  int ***r, **q, *p, i=8;
//   p = &i;
//   (*p)++;
//   q = &p;
//   (**q)++;
//   r = &q;
//   cout<<*p << " " <<**q << " "<<***r; // 10 10 10


int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
return 0;
}