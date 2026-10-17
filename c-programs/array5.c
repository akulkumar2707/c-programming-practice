//wap to rotate an array by one position to the right
#include <stdio.h>

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int i,last;
    last=arr[8];
    for(i=8;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=last;
    printf("array after rotation: ");
    for(i=0;i<9;i++)
    printf("%d",arr[i]);
    return 0;
}