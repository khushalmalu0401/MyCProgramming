/*PRIME NUMBER PROGRAM*/ 
//#include<stdio.h>
// #include<stdio.h>  
// int main(){    
// int n,i,m=0,flag=0;    
// printf("Enter the number to check prime:");    
// scanf("%d",&n);    
// m=n/2;    
// for(i=2;i<=m;i++)    
// {    
// if(n%i==0)    
// {    
// printf("Number is not prime");    
// flag=1;    
// break;    
// }    
// }    
// if(flag==0)    
// printf("Number is prime");     
// return 0;  
//  } 

/*TAKING USER INPUT AS THREE NUMBERS AND CHECKING THE HIGHHEST NUMBER*/
#include<stdio.h>
int main()
{
    int num_1,num_2,num_3;
    printf("Enter the three numbers:");
    scanf("&d &d &d", &num_1, &num_2, &num_3);
    if (num_1>=num_2 && num_1>=num_3)
        printf("The %d number among three given numbers is biggest", num_1);
    else if (num_2>=num_1 && num_2>=num_3)
        printf("The %d number among three given numbers is biggest", num_2);
    else
        printf("The %d number among three given numbers is biggest", num_3);
    return 0;
}
// #include <stdio.h>
// int main() {
//     double n1, n2, n3;
//     printf("Enter three different numbers: ");
//     scanf("%lf %lf %lf", &n1, &n2, &n3);

//     // if n1 is greater than both n2 and n3, n1 is the largest
//     if (n1 >= n2 && n1 >= n3)
//         printf("%.2f is the largest number.", n1);
        
//     // if n2 is greater than both n1 and n3, n2 is the largest
//     if (n2 >= n1 && n2 >= n3)
//         printf("%.2f is the largest number.", n2);
        
//     // if n3 is greater than both n1 and n2, n3 is the largest
//     if (n3 >= n1 && n3 >= n2)
//         printf("%.2f is the largest number.", n3);
        
//     return 0;
// }