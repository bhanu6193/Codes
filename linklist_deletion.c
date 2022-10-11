#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
};
struct list *ptr, *new1, *head;
void create()
{
    int n, i;
    printf("Enter number of nodes \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        new1 = (struct list *)malloc(sizeof(struct list));
        if (new1 == NULL)
        {
            printf("OVERFLOW");
        }
        else
        {
            int item;
            printf("Enter item \n");
            scanf("%d", &item);
            new1->data = item;
            new1->next = NULL;
        }

        if (head == NULL)
        {
            head = new1;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new1;
        }
    }
}

void deletefirst()
{
    ptr = head;
    if (head == NULL)
    {
        printf("UNDERFLOW");
    }

    head = head->next;
    free(ptr);
}

void deletionmid()
{
    struct list *save;
    int index;
    ptr = head;
    save = head->next;
    if (head == NULL)
    {
        printf("UNDERFLOW");
    }
    printf("enter index to delete \n");
    scanf("%d", &index);
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        save = save->next;
        i++;
    }
    ptr->next = save->next;
    free(save);
}

void deletionlast()
{
    struct list *save;
    ptr = head;
    save = head->next;
    if (head == NULL)
    {
        printf("UNDERFLOW");
    }

    while (save->next != NULL)
    {
        ptr = ptr->next;
        save = save->next;
    }
    ptr->next = NULL;
    free(save);
}

void display()
{
    int j = 1;
    while (head != NULL)
    {
        printf("%d item is %d \n", j, head->data);
        head = head->next;
        j++;
    }
}

int main()
{
    struct list head;
    create();
    deletefirst();
    deletionmid();
    deletionlast();
    display();

    return 0;
}