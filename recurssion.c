#include<stdio.h>
int fib();
int main()
{
    fib();
    return 0;
}
int fib(){
    int i;
    printf("Enter the number of terms : ");
    scanf("%d", &i);
    if(i == 1 || i == 2){
        return i;
    }
    else{
        return i + fib();
        printf("%d", i);
    }
}