//wap to demonstrate switch case
#include <stdio.h>

int main(){
    int num;
    printf("enter the value of num :");
    scanf("%d",&num);
    switch(num)//1
    {
        case 1:
        printf("first\n");
        case 2:
        printf("second\n");
        case 3:
        printf("third\n");
        default:
        printf("invalid\n");
    }
    return 0;
}