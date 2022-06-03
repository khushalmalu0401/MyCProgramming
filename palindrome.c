#include <stdio.h>
int main()
{
    int n, result = 0, q, rem;
    printf("enter the no to check:");
    scanf("%d", &n);
    q = n;
    while (q != 0)
    {
        rem = q % 10;                       //121 -->1
        result = result * 10 + rem;         //1
        q = q / 10;                         //12
    }
    if (result == n)
        printf("it is palindrome");
    else
        printf("it is not palindrome");
    return 0;
}
