#include<stdio.h>

int binarysearch(int arr[],int size, int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    int index;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr [mid]==element)
        {
            index= mid;
            high=mid-1;
        }
        if (arr[mid]<element )
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

        return mid;
        
        
    }
    
}

int main(){

int arr[]={1,2,2,2,6,6,6,8,9,11};
int size=sizeof(arr)/sizeof(int);
int element=6;
int b=binarysearch(arr,size,element);
printf("Element %d is found at %d index", element,b);
     
     return 0;
}