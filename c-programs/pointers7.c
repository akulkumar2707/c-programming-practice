//wap to demonstrate call by value using a function
#include <stdio.h>
void value(int x, int y);
int main(){
    int a=3,b=5;
    printf(" before calling the function a=%d and b=%d\n",a,b);
    value(a,b);
    printf(" after calling the function a=%d and b=%d\n ",a,b);//a=4 b=6 a=3 b=5
    
    return 0;
}
void value(int x,int y)
{
    x++;
    y++;
    printf("value of x=%d and y=%d\n ",x,y);
}
