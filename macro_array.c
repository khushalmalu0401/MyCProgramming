#include<stdio.h>
#include<math.h>
#define MAX 50
int main()
{
    int a[MAX][MAX],b[MAX][MAX],sum[MAX][MAX];
    // int b[][];
    int arows,acolumns,brows,bcolumns,sum=0;
    printf("Enter the no. of rows and columns of matrix A :");
    scanf("%d %d",&arows,&acolumns);
    printf("Enter the Elements of matrix A :\n");

    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Enter the no. of rows and columns of matrix B :");
    scanf("%d %d",&brows,&bcolumns);
    if(brows != acolumns){
    printf("Cannot perform operation");

    }
    else{
    printf("Enter the Elements of matrix B :\n");

    for (int m = 0; m < arows; m++)
    {
        for (int c = 0; c < acolumns; c++)
        {
            
            scanf("%d", &a[m][c]);
        }
    }   
    }
    printf("\n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            for (int k = 0; k < brows; k++)
            {
                sum = a[i][j] + b[i][j];
            }
            sum[i][j] = sum;
            sum = 0;
        }
        
    }
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}