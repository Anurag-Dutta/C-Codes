/*
    AUTHOR: BlueKnight
    CREATED: 2021-10-13 00:21:11
*/
#include <stdio.h>
#include <conio.h>

struct node
{
    struct node *link;
    int data;
};
struct node *head = NULL;
void print()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}
int count()
{
    int cnt = 0;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cnt++;
        ptr = ptr->link;
    }
    return cnt;
}
void head_insert(struct node **head, int data)
{
    struct node *NEWNODE = (struct node *)malloc(sizeof(struct node));
    NEWNODE->data = data;
    NEWNODE->link = *head;
    *head = NEWNODE;
}
void tail_insert(struct node **head, int data)
{
    struct node *NEWNODE = (struct node *)malloc(sizeof(struct node));
    NEWNODE->data = data;
    NEWNODE->link = NULL;
    if (*head == NULL)
    {
        *head = NEWNODE;
    }
    else
    {
        struct node *ptr = *head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = NEWNODE;
    }
}
void random_insert(struct node **head, int data, int position)
{
    struct node *NEWNODE = (struct node *)malloc(sizeof(struct node));
    NEWNODE->data = data;
    if (position == 0)
    {
        head_insert(&head, data);
    }
    else
    {
        struct node *PREVIOUSNODE = *head;
        int index = 1;
        while (index != position)
        {
            PREVIOUSNODE = PREVIOUSNODE->link;
            index++;
        }
        NEWNODE->link = PREVIOUSNODE->link;
        PREVIOUSNODE->link = NEWNODE;
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
        *head = ptr->link;
    }
}
void tail_delete(struct node **head)
{
    if (count() == 1)
    {
        head_delete(&head);
        return;
    }
    struct node *ptr1 = *head;
    struct node *ptr2;
    while (ptr1->link != NULL)
    {
        ptr2 = ptr1;
        ptr1 = ptr1->link;
    }
    ptr2->link = NULL;
    free(ptr1);
}
void random_delete(struct node **head, int key)
{
    struct node *ptr = head;
    if (ptr->data == key)
    {
        head_delete(&head);
    }
    while (ptr->link->data != key)
    {
        ptr = ptr->link;
    }
    struct node *to_delete = ptr->link;
    ptr->link = ptr->link->link;
    free(to_delete);
}
int main()
{
    system("clear");
    tail_insert(&head, 8);
    random_insert(&head, 59, 1);
    head_insert(&head, 85);
    head_delete(&head);
    head_insert(&head, 8);
    head_delete(&head);
    head_delete(&head);
    head_insert(&head, 55);
    head_insert(&head, 56);
    random_delete(&head, 55);
    random_delete(&head, 56);
    random_delete(&head, 59);
    head_insert(&head, 55);
    print();
    getch();
    return 0;
}