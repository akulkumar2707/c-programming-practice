// wap to find the digits of a number 
#include <stdio.h>
 int sumOfDigits(int a);
int main(){
    int num;
    printf("enter your number : ");
    scanf("%d",&num);
    printf("sum of digits of a number ");

    
    return 0;
}
 int sumOfDigits(int n)
 { int rem,sum=0;
     }
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