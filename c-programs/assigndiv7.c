//wap to find remainder when a number is divided by 7
#include <stdio.h>

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    int remainder = num%7;
    printf("remainder : %d",remainder);

    return 0;
}