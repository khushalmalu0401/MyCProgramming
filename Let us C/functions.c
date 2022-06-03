/*
#include<stdio.h>

void italy();
void brazil();
void france();
int main()
{
    italy();
    brazil();
    france();
    printf("I am in main\n");
    return 0;
}
void italy()
{
    printf("I am in Italy\n");
}
void brazil()
{
    printf("I am in brazil\n");
}
void france()
{
    printf("I am in France\n");
}
*/
// #include<stdio.h>
// int main()
// {

//     printf("Hello Everyone");
//     void Khushal();
//     {
//     printf("Hello jfjahsgdfh");

//     }
//     return 0;
// }


// CALSUM FUNCTION

// #include<stdio.h>
// #include<math.h>
// int calsum(int x, int y, int z);
// int main()
// {
//     int a,b,c,sum;
//     printf("Enter the values of a,b & c:\n");
//     scanf("%d%d%d", &a, &b ,&c);
//     sum = calsum(a,b,c);
//     printf("Sum is: %d\n", sum);
//     return 1;
// }

#include<stdio.h>
int sum(int x, int y , int z)
{
    int c= x+y+z;
    return c;
}
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d", a, b, c);
    printf("The sum of given 3 numbers is %d", sum(a,b,c));
    
    return 0;
}