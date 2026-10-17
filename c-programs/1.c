//wap to find the largest among three numbers using ternary operator
#include <stdio.h>

int main(){
    int a,b,c,large;
    printf("enter the value of a b and c:");
    scanf("%d%d%d", &a,&b,&c);
    large=a>b?a:b;
    large=large>c?large:c; 
    printf("larger among %d %d and %d",a,b,c,large);
    return 0;
}