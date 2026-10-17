// wap to check the factorial of a number
#include <stdio.h>
long int factorial(int a );
int main(){
    int a;
    printf("enetr the vaue of a ");
    scanf("%d", &a);
    if (a<0)
    printf("no factorial pf negative number ");
    else
    printf("factorial of a %d is %ld", a, factorial(a));

    return 0;
}                               
long int factorial(int n)
{
    int fact=1,i;
    for (i=n;i>0;i--)
    fact= fact*i;
    return fact;

}

