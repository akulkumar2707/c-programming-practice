//wap to print fibonacci series
#include <stdio.h>

int main(){
    int n,i=0;
    int a=0,b=1;
    printf("enter how many numbers");
    scanf("%d",&n);
    for (i=0;i>n;i++)
    {
        printf("%d\n",a);
        int temp =a+b;
        a=b;
        b=temp;
    
    return 0;
}
}