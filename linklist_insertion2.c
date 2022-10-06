#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
};

struct list *ptr, *next, *node,*new1;

void create()
{
    struct list *new1;
    int n;

    printf("enter number of nodes you want to insert \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        new1 = (struct list *)malloc(sizeof(struct list));
        if (new1 == NULL)
        {
            printf("OVERFLOW");
        }
        else
        {
            int item;
            printf("Enter the element \n");
            scanf("%d", &item);
            new1->data = item;
            new1->next = NULL;

            if (node == NULL)
            {
                node = new1;
            }
            else
            {
                ptr = node;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = new1;
            }
        }
    }
}
int insertbeg()
{
    new1 = (struct list *)malloc(sizeof(struct list));
    if (new1 == NULL)
    {
        printf("Node not created");
    }
    else
    {
        int item;
        printf("enter item you want to insert at begining \n");
        scanf("%d", &item);
        new1->data = item;
        new1->next = node;
        node = new1;
    }
}
int insertlast(){
    new1 = (struct list *)malloc(sizeof(struct list));
    if (new1 == NULL)
    {
        printf("Node not created");
    }
    else
    {
        int item;
        printf("enter element to insert at last");
        scanf("%d",&item);
        new1->data=item;
        ptr=node;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new1;
        new1->next=NULL;

    }
    
}
int insertmid(){
    new1 = (struct list *)malloc(sizeof(struct list));
    if (new1 == NULL)
    {
        printf("Node not created");
    }
    else
    {
        int item,index;
        
        printf("enter index \n");
        scanf("%d", &index);
        printf("enter element to insert at index \n");
        scanf("%d",&item);
        new1->data=item;
        ptr=node;
        int i=0;
        while (i!=index-1)
        {
            ptr=ptr->next;
            i++;
        }
        new1->next=ptr->next;
        ptr->next=new1;
        
    }
    
}
void display()
{
    int j = 1;
    while (node != NULL)
    {
        printf("%d item is %d \n", j, node->data);
        node = node->next;
        j++;
    }
}
int main()
{
    struct list node;
    create();
    insertbeg();
    insertlast();
    insertmid();
    display();

    return 0;
}