//wap to search an element in an array using binary search
#include <stdio.h>

int main(){
    int arr[10];
    int i,low,high,mid=999,search;
    for(i=0;i<10;i++)
{
    printf("enter the element at[%d]: ",i);
    scanf("%d",&arr[i]);
}
printf("enter the element to be searched: ");
scanf("%d",&search)
;
while(low<high&&search!=arr[mid])
{
    mid=(low+high)/2;
    if(search>arr[mid])
    low=mid+1;
    if(search<arr[mid])
    high=mid-1;
    if(search==arr[mid]){
        printf("%d found at index %d",search,mid);
        break;
    }
    if(low>high)
    printf("element not found...!");
}


    return 0;
}