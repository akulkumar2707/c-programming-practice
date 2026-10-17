//wap to check whether a number is negative
#include <stdio.h>

int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (num<0)
        printf("%d is negative\n",num);
    printf("value of num = %d",num);
    
    return 0;
}