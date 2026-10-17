//wap to print the value and address of variables
#include <stdio.h>

int main(){
    int age=12;
    float sal=123.00;
    printf("Value of age= %d and Address of age = %u\n",age,&age);
    printf("Value of Sal= %f and Address of sal = %u\n",sal,&sal);
    return 0;
}