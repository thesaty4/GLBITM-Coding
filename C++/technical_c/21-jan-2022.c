// ----------------------------------Array-------------------------------------
// Homogenous, contigeous memeory allocation
// Fixed size
// Static Memory allocation | Compile time memory allocation
// Sequencially indexed

// ---------------------------------- String ---------------------------------
// collection of characters terminated by Null Char
// Null => '\0'
// \n, \t, \a, <- special charecter
// string is not data type
// How much memory usses by str

//               ___________________________
// char str[10] | h | e | l | l | o | \0 |  | 
// 4 byte

#include<stdio.h>
void main(){

    char str[100]; // index 0 to 9
    //str="hello" ;
    // scanf("%s",str); // no limit in scanf

    // gets(); //No limit to read chars
    fgets(str,100,stdin); //f 
}

