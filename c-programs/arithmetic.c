//wap to make a simple calculator using switch
#include <stdio.h>

int main(){
    char op;
    int a,b;
    printf("enter the number and the othe nmuber: ");
    scanf("%d %c %d",&a,&op,&b);
    switch (op)
    {
    case '+':
    printf("result =%d\n",a+b);
    break;
    case '-':
    printf("result =%d\n",a-b);
    break;
    case '/':
    printf("result =%d\n",a/b);
    break;
    case '*':
    printf("result =%d\n",a*b);
    break;
    case '%':
    printf("result =%d\n",a%b);
    break;
    default:
    printf("enter valid operator.");
    }
    return 0;
}
  

