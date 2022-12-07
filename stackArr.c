/*
   --------------EXPLANATION---------------------
   
1. define size 10000 phir top = -1, and a[size]
2. push()
    if top==size-1 then overflow
    else ek element declare kr ke insert kara lo
    phir top=top+1 then a[top]=n
    phir display kara lo
3. pop()
    if top==NULL to underflow
    else pahale poped hone vala element print kara lenge
    phir top=top-1
    phir display
4.  main()
    switch laga ke push pop ko call kara lenge        */

#include <stdio.h>
#define size 100000
int top = -1, a[size];
void push()
{
    if (top == size - 1)
    {
        printf("Overflow");
    }
    else
    {
        int n;
        printf("Enter the element you want to insert \n");
        scanf("%d", &n);
        top = top + 1;
        a[top] = n;
        printf("Element is inserted \n");
        printf("%d \n", a[top]);
        printf("Element present in the stack: \n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d ", a[i]);
        }
    }
}
void pop()
{
    if (top == NULL)
    {
        printf("Underflow");
    }
    else
    {
        printf("Poped element : %d \n", a[top]);
        top = top - 1;
        printf("Element deleted \n");
        printf("Element pressent in the stack: \n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    while (1)
    {
        int choice;
        printf(" \nEnter the Operation: \n");
        printf("\n1.push \n2.Pop \n3.Exit \n");
        printf("Enter choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            exit(0);
            break;

        default:
            printf("Enter valid choice \n");
            break;
        }
    }

    return 0;
}
