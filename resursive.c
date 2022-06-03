// #include<stdio.h>
// int fun(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     return 7 + fun(n-2);
// }
// int main()
// {
//     printf("%d", fun(4));
//     return 0;
// }

//writing a recurssive program to find factoerial of number.
#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the number whose factorial is to be found:");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, fact(n));
}