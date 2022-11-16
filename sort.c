#include<stdio.h>

void bubblesort(int a[],int n){
    int i,j,temp;
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1; j++)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        
    }
}

void selectionsort(int a[],int n){
    int i,j,temp;
    for (i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        
    }
}
void insertionsort(int a[],int n){
    int i,j,temp;
    for (i = 0; i < n; i++)
    {
        for ( j = i; j > 0; j--)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        
    }
}
int main(){
    int a[100],n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);

    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    bubblesort(a,n);

    printf("The sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }

     
     return 0;
}