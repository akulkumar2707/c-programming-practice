//wap to check whether a number is an armstrong number
#include <stdio.h>
#include "prac4.h"

int main(){
    int n,rem,sum=0,cube,num;
      printf("Enter a number: ");
  scanf("%d", &n);
  num = n;
    while (n>0)
   { rem=n%10;
    cube=rem*rem*rem;
    sum=sum+cube;
    n=n/10;
   }
    if (num==sum)
    printf("%d is a armstrong number",n);
    else
    printf("%d is not a armstrong number",n);
    return 0;

}