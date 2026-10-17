//wap to reverse the first n elements of an array using a function
#include <stdio.h>

int main(){
    int arr[10],i,n;
    printf("enter the 10 array elements: ");
    for(i=0;i<10;i++)
   scanf("%d" ,&arr[i]);
    printf("enter the value of n (1-10):");
    scanf("%d",&n);
    reverse(arr,n);
    printf("array after reversing first %d elementes: ",n);
    for(i=0;i<10;i++)
    printf("%d",&arr[i]);
    return 0;
}
void reverse (int arr[],int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

    }
}