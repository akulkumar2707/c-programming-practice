//wap to find the sum of digits of a number
#include <stdio.h>

int main(){
int num, rem, sum = 0;
printf("enter the number:");
scanf("%d", &num);
while (num > 0)
{
    rem=num%10;
    sum=sum+rem;
    num=num/10;

}
printf("sum of digits number is %d",sum); 
    return 0;
}