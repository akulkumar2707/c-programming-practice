//wap to print fibonacci series
#include <stdio.h>

int main(){
    int term,i,c;
    printf("enter the number of terms: ");
    scanf("%d",&term);
    int a=0,b=1;
    printf("%d %d",a,b);
    for(i=2;i<term;i++)
    {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    }
    return 0;
} 