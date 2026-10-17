//wap to find the second largest element of an array
#include <stdio.h>

int main(){
    int i, largest, second, arr[10];
    for (i=0;i<10;i++)
    {
        printf("Enter the element at arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    if(arr[0]>arr[1])
    {
        largest=arr[0];
        second=arr[1];
    }
    else
    {
        largest=arr[1];
        second=arr[0];
    }
    for (i=2;i<10;i++)
    {
        if (arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second)
        second= arr[i];


    }
    printf("largest =%d and second=%d",largest,second);
    
    return 0;
}