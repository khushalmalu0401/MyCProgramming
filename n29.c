//right shift operator
#include<stdio.h>
int main()
{
    //char var=3;  //Note: 3 in binary = 0000 0011
    //printf("%d", var>>1);   //the shortcut is 2^right operand as var<<1 is given so 3/2^1  and we get the the quotient value    
    char var=32;  //Note: 3 in binary = 0000 0011
    printf("%d", var>>4);   //the shortcut is 2^right operand as var<<1 is given so 3/2^1  and we get the the quotient value    
    return 0; 
}