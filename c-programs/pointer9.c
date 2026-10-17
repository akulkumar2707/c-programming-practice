//wap to swap two numbers
#include <stdio.h>
void swap (int *a ,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

}
int main(){
    int a=6,b=8;
    printf(" before swapping a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("after swapping a=%d and b=%d",a,b);

    
    return 0;
}