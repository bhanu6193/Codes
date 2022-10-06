#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

int display(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("Element %d \n", ptr->data);
    ptr = ptr->next;
  }
}

struct Node *insertionfirst(struct Node *head)
{
  int data;
  printf("enter data to insert \n");
  scanf("%d", &data);

  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;
  head = ptr;
  return ptr;
}

struct Node *insertionbtw(struct Node *head)
{
  int data, index;
  printf("enter index \n");
  scanf("%d", &index);

  printf("enter data to insert \n");
  scanf("%d", &data);

  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node *p = head;
  int i = 0;
  while (i != index - 1)
  {
    p = p->next;
    i++;
  }
  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
  return head;
}
struct Node *insertionend(struct Node *head)
{
  int data;
  printf("enter data to insert \n");
  scanf("%d", &data);

  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node *p = head;
  while (p->next != NULL)
  {
    p = p->next;
  }

  ptr->data = data;
  p->next = ptr;
  ptr->next = NULL;
  return head;
}

int main()
{

  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  struct Node *second = (struct Node *)malloc(sizeof(struct Node));
  struct Node *third = (struct Node *)malloc(sizeof(struct Node));

  head->data = 5;
  head->next = second;
  second->data = 33;
  second->next = third;
  third->data = 44;
  third->next = NULL;
  printf("Before insertion \n");
  display(head);

  // head= insertionfirst(head);
  // head=insertionbtw(head);

  head = insertionend(head);
  printf("After insertion \n");
  display(head);

  return 0;
}