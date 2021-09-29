/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-29 12:13:57
*/
#include <stdio.h>
#include <conio.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;
void print(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
void count(struct node *head)
{
    int cnt = 0;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cnt++;
        ptr = ptr->link;
    }
    printf("\n%d", cnt);
}
void head_insert(struct node **key, int data)
{
    struct node *NEWNODE = (struct node *)malloc(sizeof(struct node));
    NEWNODE->data = data;
    NEWNODE->link = head;
    head = NEWNODE;
}
void tail_insert(struct node **head, int data)
{
    struct node *NEWNODE = (struct node *)malloc(sizeof(struct node));
    NEWNODE->data = data;
    NEWNODE->link = NULL;
    if (head == NULL)
    {
        head = NEWNODE;
    }
    else
    {
        struct node *ptr = head;
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
        head_insert(head, data);
    }
    else
    {
        struct node *PREVIOUSNODE = head;
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
void search(struct node *head, int key)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            printf("Found\n");
            return;
        }
        ptr = ptr->link;
    }
    printf("Not found\n");
}
int main()
{
    head_insert(head, 8);
    head_insert(head, 9);
    head_insert(head, 10);
    tail_insert(head, 8);
    tail_insert(head, 7);
    random_insert(head, 59, 2);
    print(head);
    search(head, 59);
    getch();
    return 0;
}
