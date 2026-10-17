//wap to check whether all elements of an array are distinct
#include <stdio.h>

int main(){
    int arr[100],i,j,n,flag=1;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value of arr[%d]:",i);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    
        for(j=0;j<n;j++)

    {
        if(arr[i]==arr[j])
        flag=0;
    }
    if(flag==1)
    printf("all the elements are distinct ");
    else
    printf("elemest are not disntinct");
    return 0;
}