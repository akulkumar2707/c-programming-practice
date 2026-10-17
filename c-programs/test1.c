// wap to print the series 1+2+4+7+11+16...n
#include <stdio.h>

int main(){
    int i,n,sum;
    printf("enter your number: ");
    scanf("%d",&n);
    for(i=1,i<=n,i++)
    {
        sum =sum+n;
        n++;
    }
    printf("sum=%d",sum);
    return 0;
}
