//wap to find the sum of two numbers using a function
#include <stdio.h>

void sum( ); //function declaration
int main(void)
{
    sum( ); //function calling
  return 0;
}

  void sum ()
  {
    int a,b,sum=0;
    printf("enter two number: ");
    scanf("%d%d", &a, &b);
    sum=a+b;
    printf("sum=%d",sum);
    
  }  