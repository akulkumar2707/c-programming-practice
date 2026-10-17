//wap to input and display array elements using dynamic memory allocation
#include <stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("enter the number of elements: ");
    scanf("%d ",&n);
    int *ptr=(int * )malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf(" memory insufficient...! ");
        exit(1);
    }
    for (i=0;i<n;i++) 
    {
        printf("enter  the value at index %d: ",i); 
        scanf("%d",ptr+i);
    }
        printf("array elements are: ");
        for(i=0;i<n;i++)
      printf("%d ", *(ptr+i));
        free(ptr);
    return 0;
}