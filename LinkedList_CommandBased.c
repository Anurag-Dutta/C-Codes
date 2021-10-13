/*
    AUTHOR: BlueKnight
    CREATED: 2021-10-08 01:31:27
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;
void print()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
void count()
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
        head_insert(&head, data);
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
void search(int key)
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
void delete_head(struct node **head)
{
    struct node *ptr = *head;
    *head = ptr->link;
    free(ptr);
}
void delete_tail(struct node **head)
{
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
void delete_random(struct node **head, int data)
{
    struct node *ptr = *head;
    while (ptr->link->data != data)
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
    int choice = 1;
    int ch;
    while (1)
    {
        if (choice == 0)
        {
            break;
        }
        printf("\n-----COMMAND PALLATE-----\n");
        printf("\nTo insert Press '1': ");
        printf("\nTo remove Press '2': ");
        printf("\nTo search Press '3': ");
        printf("\nEnter your Command: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int ins;
            printf("\n\n-----SUB COMMAND PALLATE-----\n");
            printf("\nTo insert at top(head), Press '1': ");
            printf("\nTo insert at bottom(tail), Press '2': ");
            printf("\nTo insert at random(random), Press '3': ");
            printf("\nEnter your Command: ");
            scanf("%d", &ins);
            switch (ins)
            {
            case 1:
            {
                int data;
                printf("\nEnter the Data: ");
                scanf("%d", &data);
                printf("\nInserting at Head...");
                head_insert(&head, data);
                break;
            }
            case 2:
            {
                int data;
                printf("\nEnter the Data: ");
                scanf("%d", &data);
                printf("\nInserting at Bottom...");
                tail_insert(&head, data);
                break;
            }
            case 3:
            {
                int data, key;
                printf("\nEnter the Data: ");
                scanf("%d", &data);
                printf("\nEnter the Position: ");
                scanf("%d", &key);
                printf("\nInserting at Position %d...", key);
                random_insert(&head, data, key);
                break;
            }
            default:
            {
                printf("\nAre you sure that you have entered the CORRECT choice? ");
                break;
            }
            }
            break;
        }
        case 2:
        {
            int rem;
            printf("\n\n-----SUB COMMAND PALLATE-----\n");
            printf("\nTo remove from top(head), Press '1': ");
            printf("\nTo remove from bottom(tail), Press '2': ");
            printf("\nTo remove from random(random), Press '3': ");
            printf("\nEnter your Command: ");
            scanf("%d", &rem);
            switch (rem)
            {
            case 1:
            {
                printf("\nRemoving from Head...");
                delete_head(&head);
                break;
            }
            case 2:
            {
                printf("\nRemoving from Tail...");
                delete_tail(&head);
                break;
            }
            case 3:
            {
                int key;
                printf("\nEnter the Data: ");
                scanf("%d", &key);
                printf("\nRemoving %d...", key);
                delete_random(&head, key);
                break;
            }
            default:
            {
                printf("\nAre you sure that you have entered the CORRECT choice? ");
                break;
            }
            }
            break;
        }
        case 3:
        {
            int key;
            printf("\nEnter the Data to be Searched: ");
            scanf("%d", &key);
            search(key);
            break;
        }
        }
        printf("\n");
        print(head);
        printf("\nWanna spend some more time(1 - YES, 0 - NO) ? ");
        scanf("%d", &choice);
    }
    return 0;
}