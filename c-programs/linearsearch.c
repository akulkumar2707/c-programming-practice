//wap to search an element in an array using linear search
#include <stdio.h>

int main(){
    int arr[10];
    int i,search;
    for(i=0;i<10;i++)
    {
        printf("enter the element: ");
        scanf("%d", &arr[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d", &search);
    for (i=0; i<10; i++)
    {
        if(arr[i] == search)
        {
            printf("%d found at index %d\n", search, i);
            return 0;
        }
    }
    printf("element not found...!\n");

    return 0;
}
