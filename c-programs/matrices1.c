//wap to check that elements of an array are distinct 
#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int isDistinct = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                isDistinct = 0;
                break;
            }
        }
        if(isDistinct == 0)
            break;
    }
    
    if(isDistinct)
        printf("All elements are distinct\n");
    else
        printf("Array has duplicate elements\n");
    
    return 0;
}