//wap to store addresses of variables in pointers and print them
#include <stdio.h>

int main(){
    int a=78;
    float b=4.5;
    int *p1=&a;
    float *p2=&b;
    printf("Value of p1=address of &a = %u\n",p1);
    printf("Value of p2=address of &b=%u\n",p2);
    printf("address of p1=%u\n",&p1);
    printf("address of p1=%u\n",&p2);   
    printf("value of a=%d%d%d\n",a,*p1,(&a));
    printf("value of b=%d%d%d\n",b,*p1,(&b));
    return 0;
}
