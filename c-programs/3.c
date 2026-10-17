//wap to find the product of digits of a number
#include <stdio.h>

int main(){
    int num,rem,prod=1;
    printf("enter the number:");
    scanf("%d", &num);
    int n=num;
    while (num>0)
    {
     rem=num%10;
     prod*=rem;
     num/=10;
    }
    printf("product of digits of %d is %d",n,prod);
    
    return 0;
}