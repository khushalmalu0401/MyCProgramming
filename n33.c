//comma operator
//logic check
#include<stdio.h>

int main()
//{
//    int  a = (2, 4, 5);    // 5 is printed rest of all are rejected
//    
//    printf("%d" , a);
//    return 0;
//{
//    int a;
//    a= 2, 8, 5; 
//    printf("%d", a);
//    return 0;
//}
//
{
    int var;
    int num;

    num = (var = 15, var+35);
    printf("%d", num);
    return 0;
}
