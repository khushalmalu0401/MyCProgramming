#include <stdio.h>

int main()
{
    char var=3;  //Note: 3 in binary = 0000 0011
    //printf("%d", var<<1);   //the shortcut is 2^right operand as var<<1 is given so 3×2^1 and so on
    printf("%d", var<<3); 
    return 0; 
    
}    
