#include <stdio.h>
// for displaying array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
void deletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
        
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 22, 54};
    int index = 1, size = 5;

    display(arr, size);
    
    deletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}