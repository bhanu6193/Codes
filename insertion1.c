#include <stdio.h>

void display(int arr[], int n)
{
    // TRAVERSAL
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    size = size + 1;
}

int main()
{
    int arr[100];
    int size, element = 45;
    int index,n;
    printf("enter number of elements to enter in array");
    scanf("%d",&n);

    printf("enter elements in a array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    size =n;
    display(arr, size);
    printf("enter the index where you want to enter");
    scanf("%d", &index);

    printf("enter the element where you want to enter");
    scanf("%d", &element);

    insertion(arr, size, element, 100, index);
    // size = size + 1;
    display(arr, size);

    return 0;
}