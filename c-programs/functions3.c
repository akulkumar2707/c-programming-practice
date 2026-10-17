// wap to check if the number is odd or even
#include <stdio.h>
void evenOdd(int num);
int main(){
    int a;
    printf("enter the values of a ");
    scanf("%d",&a);
   evenOdd(a);
    return 0;
}
void evenOdd(int n)
{
    if (n%2==0)
    printf("%d is even",n);
    else 
    return ("%d is odd ",n);


}
