/*
    AUTHOR: BlueKnight
    CREATED: 2021-10-13 11:18:49
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    struct node *PREVIOUS;
    struct node *NEXT;
    int data;
};
struct node *head = NULL;
void print()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("PREVIOUS ADDRESS: %x, DATA: %d, NEXT ADDRESS: %x \n", ptr->PREVIOUS, ptr->data, ptr->NEXT);
        ptr = ptr->NEXT;
    }
}
int count()
{
    struct node *ptr = head;
    int cnt = 0;
    while (ptr != NULL)
    {
        cnt++;
        ptr = ptr->NEXT;
    }
    return cnt;
}
void head_insert(struct node **head, int data)
{
    struct node *NEWNODE = (struct node *)malloc(sizeof(struct node));
    NEWNODE->PREVIOUS = NULL;
    NEWNODE->data = data;
    NEWNODE->NEXT = (*head);
    if ((*head) != NULL)
    {
        (*head)->PREVIOUS = NEWNODE;
    }
    *(head) = NEWNODE;
}
void tail_insert(struct node **head, int data)
{
    struct node *NEWNODE = (struct node *)malloc(sizeof(struct node));
    NEWNODE->data = data;
    NEWNODE->NEXT = NULL;
    if ((*head) == NULL)
    {
        *head = NEWNODE;
    }
    else
    {
        struct node *ptr = (*head);
        while (ptr->NEXT != NULL)
        {
            ptr = ptr->NEXT;
        }
        NEWNODE->PREVIOUS = ptr;
        ptr->NEXT = NEWNODE;
    }
}
void head_delete(struct node **head)
{
    struct node *ptr = *head;
    if (count() == 1)
    {
        printf("It is the last Element, deleting it will lead to destruction of the LL");
    }
    else
    {
        (*head) = ptr->NEXT;
        (*head)->PREVIOUS = NULL;
        free(ptr);
    }
}
void tail_delete(struct node **head)
{
    if (count() == 1)
    {
        head_delete(&head);
    }
    else
    {
        struct node *ptr1 = *head;
        struct node *ptr2;
        while (ptr1->NEXT != NULL)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->NEXT;
        }
        ptr2->NEXT = NULL;
        free(ptr1);
    }
}
int main()
{
    system("clear");
    tail_insert(&head, 98);
    tail_insert(&head, 81);
    tail_insert(&head, 87);
    tail_insert(&head, 88);
    tail_insert(&head, 82);
    tail_delete(&head);
    print();
    getch();
    return 0;
}