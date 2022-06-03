#include<stdio.h>
int main()
{
    float fahr,centi;
    printf("Enter the value of temperature in faherneit:");
    scanf("%f", &fahr);
    centi = (fahr - 32)*5/9;
    printf("temperature in centigrate is:%f", centi);
    return 0;
}