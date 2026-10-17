//wap to find the factorial of a number
#include <stdio.h>

int main(){
    long int num,fact = 1;
    printf("enter the number :");
    scanf("%ld", &num);
    if (num<0)
    printf("no factoroial of negative number ");
    else 
    {
        while (num>0)
        {
            fact=fact*num;
            num--;
        }
    }
    printf("factorial of a number is %ld",fact);
       return 0;
}