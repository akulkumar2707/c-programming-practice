// wap to get max among two numbers
#include <stdio.h>

int main(){
    int a,b,num;
    printf("enter the values of a and b : ");
    scanf("%d%d", &a, &b);
    print("larger among %d and %d is %d",a,b,max(a,b));
    return 0;
}
int max(int num1, int num2 )
{
    if (num1>num2)
    return num1;
    else 
    return num2;


}

