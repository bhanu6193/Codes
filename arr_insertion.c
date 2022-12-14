#include<stdio.h>

void display(int arr[], int n){
    //TRAVERSAL 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int insertion(int arr[],int size, int element,int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    
}

int main(){
    int arr[100]={7,8,12,27,88};
    int size=5, element=45;
    int index =3;
    display(arr,size);
    insertion(arr,size,element,100,index);
    size=size+1;
    display(arr,size);

    return 0;
}