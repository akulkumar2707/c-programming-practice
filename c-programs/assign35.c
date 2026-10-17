//wap to print size of array, integer and float using sizeof
#include<stdio.h>
int main()
{
    int arr[10];
    int num =5;
    float f=3.14;
    printf("Array size: %lu bytes\n", sizeof(arr));
    printf("Integer size: %lu bytes\n", sizeof(num));
    printf("Float size: %lu bytes\n", sizeof(f));
    
    return 0;
}