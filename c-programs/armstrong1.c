//wap to check whether a number is an armstrong number
#include <stdio.h>

int main(){
    int num,sum=0,rem,cube;
    printf("enter the number:");
    scanf("%d",&num);
    int n=num;
    while (n>0)
    {
         rem=n%10;
         cube=rem*rem*rem;
         sum=sum+cube;
          n=n/10;
    }
    if(sum==num)
    printf("%d is armstrong",num);
    else 
    printf("%d is not armstrong ",num);
    return 0;
}
