//wap to demonstrate pointers
#include <stdio.h>

int main(){
    int a=10;
    int *ptr=&a;
    int **pptr=&ptr;
    printf("address of a =%u \n",&a);
    printf(" value of ptr=%u\n",ptr);
    printf("value of *pptr =%u",*pptr);
    printf("address of ptr =%u\n ",pptr);
    printf("address of pptr =%u\n ",pptr);
    printf("value of a=%u\n",a);
    printf("vlaue of *ptr=%u\n ",*ptr);
    printf("value of **pptr =%u\n",**pptr);
    return 0;
}