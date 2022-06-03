#include<stdio.h>
#define PI 3.14
int main()
{
    float a,b,c,d,e,f,g,h;
    printf("Enter the lenght of rectangle: ");
    scanf("%f", &a);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);
    d = (a+b+a+b);
    e= a*b;
    printf("the perimeter of rectangle is %f", d);
    printf("the area of rectangle is %f", e);
    printf("the radius of circle is:", f);
    scanf("%f", &f);
    g=2*PI*f;
    printf("the circumference of circle is %f", g); 
    h=PI*f*f;
    printf("the area of circle is %f", h);
    return 0;

}    

    
