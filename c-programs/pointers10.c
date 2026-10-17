//wap to demonstrate pointers
#include <stdio.h>

int main()
{
    int arr[5]={10, 20, 30, 40, 50};
    int *p=arr;
    int i;

    for (i = 0; i < 5; i++)
    {
    printf(" enter the value at index %d",i);
    scanf("%d", p+i);


    }
    printf(" array elements are: ");
    for(i=0;i<5;i++)
    {
        printf("%d" ,(*p)+i);
    }

    return 0;
}