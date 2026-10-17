//wap to swap two numbers using a third variable
#include <stdio.h>

int main(){
    int a=10 , b=40,temp;
    printf("=before swapping a=%d and b =%d ",a,b);
    temp =a;
    a=b;
    b=temp;
    printf("after swapping a=%d and b =%d",a,b);

    return 0;
}