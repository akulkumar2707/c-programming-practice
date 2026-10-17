//wap to input numbers and display sum of highest and lowest number
#include <stdio.h>


int main(){
    int i,n,max,min,sum=0;
    printf("enter the total number of terms  of arr :");
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf(" enter the element at arr[%d]:",i);
        scanf("%d",&arr[i]);

    }
{

    min=max=arr[0];
    for (i=0;i<n;i++)
    
      { if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min =arr[i];
      }

    printf("max= %d and min = %d ",max,min);
    sum=max+min;
    printf("sum of highest and lowest = %d ",sum);
    







}

    return 0;
}