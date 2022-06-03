#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} ;
void transverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Enter %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node * insertbegin(struct node * head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data = data;
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    first->data = 7;
    first->next = second;
    second->data = 17;
    second->next = third;
    third->data = 71;
    third->next = NULL;
    transverse(first);
    first = insertbegin(first,562);
    transverse(first);
    return 0;
}