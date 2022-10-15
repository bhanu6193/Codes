#include<stdio.h>

int binarysearch(int arr[],int size, int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr [mid]==element)
        {
            return mid;
        }
        if (arr[mid]<element )
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

        return -1;
        
        
    }
    
}

int main(){

int arr[]={1,2,4,6,8,9,11};
int size=sizeof(arr)/sizeof(int);
int element=6;
int b=binarysearch(arr,size,element);
printf("Element %d is found at %d index", element,b);
     
     return 0;
}