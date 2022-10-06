#include <stdio.h>
#include <stdlib.h>

struct list
{
  int data;
  struct list *next;
};

struct list *ptr, *next, *node;

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
      printf("enter item you want to insert \n");
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

void display()
{
  int j = 1;
  while (node != NULL)
  {
    printf("%d item is %d \n", j, node->data);
    node=node->next;
    j++;
  }
}
int main()
{
  struct list node;
  create();
  display();


  return 0;
}