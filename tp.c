

#include <stdio.h>
void odd();
void even();
int n = 2;
void even()
{
    if (n <= 10)
    {
        printf("%d", n - 1);
        n++;
        odd();
    }
}
void odd()
{
    if (n <= 10)
    {
        printf("%d", n + 1);
        n++;
        even();
    }
}

int main()
{
    even();
    return 0;
}
