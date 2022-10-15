#include<stdio.h>

int linearsearch(int arr[],int element,int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[100]={7,8,12,22,43,65};
    int size=6;
    int element=22;
    int b=linearsearch(arr,element,size);
    printf("Element %d is found at %d",element,b);
     return 0;
}