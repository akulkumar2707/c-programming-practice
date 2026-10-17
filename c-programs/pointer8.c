//wap to demonstrate pointers
#include <stdio.h>
void demo(int *a, int *b){
    (*a)++;
    (*b)++;
    printf(" in function a=%d and b=%d\n",a,b);
}
int main()
{
    int a=6,b=8;
    printf("before calling a=%d and b=%d ",a,b);
    demo(&a,&b);
    printf("after calliing a=%d and b=%d",a,b);
return 0;
}