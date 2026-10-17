//wap to find sum of even elements and product of odd elements of an array
#include <stdio.h>

int main(){
    int arr[100],i,n,sum=0,prod=1;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the value of arr[%d]: ",i );
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sum=sum+arr[i];
        else
            prod=prod*arr[i];
    }
    return 0;
}