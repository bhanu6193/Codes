#include <stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
struct list *ptr, *new1, *node;
int create()
{

    int n, i, item;
    printf("enter number of nodes: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        new1 = (struct list *)malloc (sizeof(struct list));
        if (new1 == NULL)
        {
            printf("Overflow");
        }
        else
        {
            printf("enter item: \n");
            scanf("%d",&item);
            new1->data=item;
            new1->next=NULL;

            if (node==NULL)
            {
                node=new1;
            }
            else{
                ptr=node;
                while (ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=new1;

            }
            
        };
    }
}
void insertion()
{
    new1=(struct list *)malloc(sizeof(struct list));
    if (new1==NULL)
    {
       printf("Overflow");
    }
    else{
        int index,item;
        printf("Enter index : \n");
        scanf("%d",&index);
        printf("Enter item you want to insert \n");
        scanf("%d",&item);
        new1->data=item;
        if (index==0)
        {
            new1->next=node;
            node=new1;
        }
        else{
            int i=0;
            ptr=node;
            while (i!=index-1)
            {
                ptr=ptr->next;
                i++;
            }
            new1->next=ptr->next;
            ptr->next=new1;
            
        }
        
    }
    
}
void deletion(){
    struct list *save,*node;
    int index;
    if (node==NULL)
    {
        printf("Underflow");
    }
    else{
    
    printf("Enter index : \n");
    scanf("%d",&index);
    if (index==0)
    {
        ptr=node;
        node=node->next;
        free(ptr);
    }
    else{
        ptr=node;
        save=node->next;
       int i=0;
       while (i!=index-1)
       {
        ptr=ptr->next;
        save=save->next;
        i++;
       }
       ptr->next = save ->next;
       free(save);
        
    }
    }
}
void display(){
    int j=1;
    ptr=node;
    while (ptr!=NULL)
    {
        printf("%d item is %d \n",j,node->data);
        ptr=ptr->next;
        j++;
    }
    
}

int main()
{
    struct list *node;
    int choice;
    create();
        printf("Enter Operation: \n");
        printf("1.Insertion \n 2.Deletion \n 3.Display");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            insertion();
            display();
            break;
        case 2:
            deletion();
            display();
            break;

        case 3:
            display();    
            break;
        default:
            break;
        }
    

    return 0;
}

