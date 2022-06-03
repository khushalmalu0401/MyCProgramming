#include <stdio.h>
#include <math.h>

int main()
{
    int k = 0,a,num;
    printf("Please enter a number:");
    scanf("%d",&num );
    a = ceil(sqrt(num));
    int q=num , o;
    for (int i = 2; i < a; i++)
    {
        if(q % i== 0)
        k = 1;
    }
    if(k==0 && q != 1 || q == 2 || q==3){
        printf("Given number %d is prime", q);
    }
    else{
        printf("Given number %d is not a prime", q);
    }
    
    return 0;
}
