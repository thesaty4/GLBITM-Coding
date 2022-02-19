#include <stdio.h>
#include<string.h>
int main()
{
    // Write C code here
    char str[50] = "THIS IS GOOD";
    int start = -1, i = 0,end;
    printf("Before Rev : %s", str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            int s = start + 1, e = i - 1;

            while (s <= e)
            {
                // Swap
                char ch = str[s];
                str[s] = str[e];
                str[e] = ch;
                s++;
                e--;
            }

            start = i;
        }
        i++;
    }
    end=i-1;
    while(start<end){
        char ch = str[start];
        str[start+1] = str[end];
        str[end+1] = ch;
        start++;
        end--;
    }

    printf("\nAfter Rev : %s", str);
    return 0;
}